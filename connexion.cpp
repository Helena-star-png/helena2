#include "Connexion.h"


Connexion::Connexion(){
    db = QSqlDatabase:: addDatabase("QSQLITE");
}

Connexion::~Connexion(){
    if(db.isOpen())
        db.close();
}

Connexion& Connexion::createInstance(){
    static Connexion instance;
    return instance;
}

bool Connexion::createConnexion(){
    db.setDatabaseName("Source_ProjetCPP");
    db.setUserName("helena");
    db.setPassword("0000");
    if (db.open()){
        qDebug() <<"Connexion etablie";
        return true;
    }
    qDebug()<< "Echec de la connexion:" << db.lastError().text();
    return false;

}
