/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(567, 455);
        plainTextEdit = new QPlainTextEdit(About);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 10, 541, 431));

        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QApplication::translate("About", "Form", Q_NULLPTR));
        plainTextEdit->setPlainText(QApplication::translate("About", "Witaj w GIMS, prostej aplikacji do zarz\304\205dzania zasobami magazynowymi.\n"
"\n"
"Aplikacja umo\305\274liwia dodawanie, usuwanie, edycj\304\231 i  wyszukiawnie towar\303\263w.\n"
"\n"
"Opis przycisk\303\263w:\n"
"Domek - Wy\305\233wietl wszystkie towary w magazynie\n"
"Plus - Dodaj nowy towar do magazynu\n"
"Kosz - Usu\305\204 wybrane towary z magazynu\n"
"Drzwi - Wyjd\305\272 z aplikacji", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
