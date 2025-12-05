#include "mainwindow.h"
#include"connexion.h"
#include <QMessageBox>
#include <QFile>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Connexion& c = Connexion:: createInstance();
    bool test = c.createConnexion();
    MainWindow w;
    if(test){
        w.show();
        QMessageBox::question(nullptr,
                              "Titre",
                              "Message",
                              QMessageBox::Yes | QMessageBox::Cancel);
    } else {
        QMessageBox:: critical(
            nullptr,
            QObject::tr("Base de données"),
            QObject::tr("Echec de la connexion.\nCliquez sur Annuler pour quitter."),
            QMessageBox::Cancel
            );
    }
    return a.exec();
}
