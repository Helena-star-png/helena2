#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableEmployer->setModel(E.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_ajouter_clicked()
{
    int id = ui->lineEdit_id->text().toInt();
    QString nom = ui->lineEdit_nom->text();
    QString prenom = ui->lineEdit_prenom->text();
    QString mail = ui->lineEdit_mail->text();
    QString poste = ui->lineEdit_poste->text();
    double salaire = ui->lineEdit_salaire->text().toDouble();

    Employe emp(id, nom, prenom, mail, poste, salaire);

    bool test = emp.ajouter();

    if(test){
        QMessageBox::information(this, "Ajout", "Employe ajouté avec succès.");
        ui->tableEmployer->setModel(emp.afficher());
    } else {
        QMessageBox::warning(this, "Erreur", "Echec de l'ajout.");
    }
}

void MainWindow::on_pushButton_supprimer_clicked()
{
    int id = ui->lineEdit_id->text().toInt();
    if(id == 0){
        QMessageBox::warning(this, "Erreur","Veuillez saisir un ID valide.");
        return;
    }

    bool test = E.supprimer(id);

    if(test){
        QMessageBox::information(this, "Suppression", "Employé supprimé.");
        ui->tableEmployer->setModel(E.afficher());
    } else {
        QMessageBox::warning(this, "Erreur", "Aucun employé trouvé avec cet ID.");
    }
}

void MainWindow::on_pushButton_afficher_clicked()
{
    ui->tableEmployer->setModel(E.afficher());
    QMessageBox::information(this, "Affichage", "Table affichée à jour.");
}

