/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *pageSupression;
    QWidget *page;
    QTableWidget *tableEmployer8;
    QPushButton *btnActualiser;
    QTableView *tableEmployer;
    QWidget *page_3;
    QComboBox *comboBox_2;
    QPushButton *SupprimerEmployer;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QWidget *page_2;
    QWidget *page_4;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_prenom;
    QLineEdit *lineEdit_salaire;
    QLineEdit *lineEdit_poste;
    QComboBox *comboBox;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *AjouterEmployer;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_mail;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pageSupression = new QStackedWidget(centralwidget);
        pageSupression->setObjectName("pageSupression");
        pageSupression->setGeometry(QRect(50, 20, 681, 511));
        page = new QWidget();
        page->setObjectName("page");
        tableEmployer8 = new QTableWidget(page);
        if (tableEmployer8->rowCount() < 1)
            tableEmployer8->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableEmployer8->setVerticalHeaderItem(0, __qtablewidgetitem);
        tableEmployer8->setObjectName("tableEmployer8");
        tableEmployer8->setGeometry(QRect(50, 50, 561, 381));
        btnActualiser = new QPushButton(page);
        btnActualiser->setObjectName("btnActualiser");
        btnActualiser->setGeometry(QRect(390, 350, 131, 29));
        tableEmployer = new QTableView(page);
        tableEmployer->setObjectName("tableEmployer");
        tableEmployer->setGeometry(QRect(380, 100, 256, 192));
        pageSupression->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        comboBox_2 = new QComboBox(page_3);
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(270, 60, 151, 26));
        SupprimerEmployer = new QPushButton(page_3);
        SupprimerEmployer->setObjectName("SupprimerEmployer");
        SupprimerEmployer->setGeometry(QRect(270, 400, 151, 29));
        label_6 = new QLabel(page_3);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(32, 60, 91, 20));
        label_7 = new QLabel(page_3);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(60, 170, 63, 20));
        label_8 = new QLabel(page_3);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(280, 180, 121, 20));
        pageSupression->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pageSupression->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        lineEdit_nom = new QLineEdit(page_4);
        lineEdit_nom->setObjectName("lineEdit_nom");
        lineEdit_nom->setGeometry(QRect(320, 50, 121, 26));
        lineEdit_prenom = new QLineEdit(page_4);
        lineEdit_prenom->setObjectName("lineEdit_prenom");
        lineEdit_prenom->setGeometry(QRect(320, 130, 131, 26));
        lineEdit_salaire = new QLineEdit(page_4);
        lineEdit_salaire->setObjectName("lineEdit_salaire");
        lineEdit_salaire->setGeometry(QRect(320, 190, 131, 26));
        lineEdit_poste = new QLineEdit(page_4);
        lineEdit_poste->setObjectName("lineEdit_poste");
        lineEdit_poste->setGeometry(QRect(320, 320, 113, 26));
        comboBox = new QComboBox(page_4);
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(320, 250, 171, 26));
        label_5 = new QLabel(page_4);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(70, 330, 63, 20));
        label_4 = new QLabel(page_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 250, 121, 20));
        label = new QLabel(page_4);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 50, 63, 20));
        label_2 = new QLabel(page_4);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 130, 71, 20));
        label_3 = new QLabel(page_4);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 190, 63, 20));
        AjouterEmployer = new QPushButton(page_4);
        AjouterEmployer->setObjectName("AjouterEmployer");
        AjouterEmployer->setGeometry(QRect(320, 410, 141, 29));
        lineEdit_id = new QLineEdit(page_4);
        lineEdit_id->setObjectName("lineEdit_id");
        lineEdit_id->setGeometry(QRect(530, 50, 121, 26));
        lineEdit_mail = new QLineEdit(page_4);
        lineEdit_mail->setObjectName("lineEdit_mail");
        lineEdit_mail->setGeometry(QRect(530, 120, 121, 26));
        pageSupression->addWidget(page_4);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pageSupression->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableEmployer8->verticalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "tableEmployer", nullptr));
        btnActualiser->setText(QCoreApplication::translate("MainWindow", "Actualiser la liste", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("MainWindow", "comboEmployes", nullptr));

        SupprimerEmployer->setText(QCoreApplication::translate("MainWindow", "SupprimerEmployer", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "combo Box  :", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Label  :", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "  labelMessage", nullptr));
        lineEdit_nom->setText(QCoreApplication::translate("MainWindow", "  lineEditNom", nullptr));
        lineEdit_prenom->setText(QCoreApplication::translate("MainWindow", "  lineEditPrenom", nullptr));
        lineEdit_salaire->setText(QCoreApplication::translate("MainWindow", "  lineEditSalaire", nullptr));
        lineEdit_poste->setText(QCoreApplication::translate("MainWindow", "  lineEditPoste", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("MainWindow", "comboDepartement", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", " Poste  :", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "D\303\251partement  :", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "  Nom   :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", " Pr\303\251nom  :", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Salaire  :", nullptr));
        AjouterEmployer->setText(QCoreApplication::translate("MainWindow", "AjouterEmployer", nullptr));
        lineEdit_id->setText(QCoreApplication::translate("MainWindow", "  lineEditNom", nullptr));
        lineEdit_mail->setText(QCoreApplication::translate("MainWindow", "  lineEditNom", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
