#ifndef EMPLOYE_H
#define EMPLOYE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMap>

class Employe
{
    int id;
    QString nom, prenom, mail, poste;
    double salaire;

public:
    Employe() {}
    Employe(int, QString, QString, QString, QString, double);

    int getID() { return id; }
    QString getNom() { return nom; }
    QString getPrenom() { return prenom; }
    QString getMail() { return mail; }
    QString getPoste() { return poste; }
    double getSalaire() { return salaire; }

    void setID(int x) { id = x; }
    void setNom(QString n) { nom = n; }
    void setPrenom(QString pr) { prenom = pr; }
    void setMail(QString m) { mail = m; }
    void setPoste(QString p) { poste = p; }
    void setSalaire(double s) { salaire = s; }

    bool ajouter();
    QSqlQueryModel* afficher();
    bool modifier(int id, QString nom, QString prenom, QString mail, QString poste, double salaire);
    bool supprimer(int id);

    QSqlQuery rechercher(int id);
    QSqlQuery trierParPoste();
    bool exporterPDF(int id, const QString &cheminFichier);
    QMap<QString, double> statistiquesSalaireParPoste();
    int nombreEmployesFormes12Mois();
};

#endif // EMPLOYE_H
