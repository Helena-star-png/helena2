#include "employe.h"
#include <QMap>
#include <QDate>
#include <QPdfWriter>
#include <QPainter>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QSqlQueryModel>
#include <QVariant>

Employe::Employe(int id,QString nom,QString prenom,QString mail,QString poste,double salaire)
{
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->mail=mail;
    this->poste=poste;
    this->salaire=salaire;
}
bool Employe::ajouter()
{
    QSqlQuery query;
    QString res = QString::number(id);
    query.prepare("insert into employe(id, nom, prenom,mail,poste,salaire)"
                  "VALUES(:id, :nom, :prenom, :mail, :poste, :salaire)");
    query.bindValue(":id",res);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":mail",mail);
    query.bindValue(":poste",poste);
    query.bindValue(":salaire",salaire);

    return query.exec();

}

QSqlQueryModel * Employe::afficher()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM employe");
    return model;

}

bool Employe::modifier(int id,QString nom, QString prenom, QString mail, QString poste, double salaire)
{
    QSqlQuery query;
    query.prepare("update employe set nom=:nom, prenom=:prenom where id=:id");

    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":mail", mail);
    query.bindValue(":poste", poste);
    query.bindValue(":salaire", salaire);

    if(query.exec()){
        return true;
    } else{
        qDebug()<<"Erreur modification employe:" << query.lastError();
        return false;
    }

}

bool Employe::supprimer(int ID)
{
    QSqlQuery query;
    query.prepare("DELETE FROM employe WHERE id = :id");
    query.bindValue(":id", ID);

    return query.exec();

}

QSqlQuery Employe::rechercher(int id)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM employe WHERE id = :id");
    query.bindValue(":id",id);
    if(!query.exec()){
        qDebug() << "Erreur recherche employe:" << query.lastError().text();
    }

    return query;
}

QSqlQuery Employe::trierParPoste()
{
    QSqlQuery query;
    if(!query.exec("SELECT * FROM employe ORDER BY poste ASC")){
        qDebug() << "Erreur tri par poste:" << query.lastError().text();
    }
    return query;
}

bool Employe::exporterPDF(int id, const QString &fichier)
{
    QSqlQuery q;
    q.prepare("SELECT id, nom, prenom, poste, salaire FROM employe WHERE id=:id");
    q.bindValue(":id", id);
    if (!q.exec() || !q.next())
        return false;
    QPdfWriter pdf(fichier);
    QPainter p(&pdf);
    if(!p.isActive())
        return false;

    p.drawText(50, 100, "Fiche employe");
    p.drawText(50, 140, "ID :" +q.value("id").toString());
    p.drawText(50, 180, "Nom:" +q.value("nom").toString());
    p.drawText(50, 220, "prenom:" +q.value("prenom").toString());
    p.drawText(50, 260, "Poste:" +q.value("poste").toString());
    p.drawText(50, 300, "Salaire:" +q.value("salaire").toString());

    p.end();
    return true;
}

QMap<QString, double> Employe::statistiquesSalaireParPoste()
{
    QMap<QString, double> stats;
    QSqlQuery query;
    query.prepare("SELECT poste, AVG(salaire) FROM employes GROUP BY poste");
    if(query.exec()){
        while(query.next()){
            QString poste = query.value(0).toString();
            double salaireMoyen = query.value(1).toDouble();
            stats.insert(poste, salaireMoyen);
        }
    } else{
        qWarning() << "Erreur SQL (statistiquesSalaireParPoste) :" << query.lastError();
    }

    return stats;
}

int Employe::nombreEmployesFormes12Mois()
{
    QSqlQuery query;
    query.prepare(
        "SELECT COUNT(*) FROM employes"
        "WHERE date_formation >= DATE(:now, '-12 months')"
        );
    query.bindValue(":now", QDate::currentDate().toString("yyyy-MM-dd"));

    if(query.exec() && query.next()){
        return query.value(0).toInt();
    } else {
        qWarning() << "Erreur SQL (nombreEmployesFormes12Mois) :" << query.lastError();
        return 0;
    }
}
