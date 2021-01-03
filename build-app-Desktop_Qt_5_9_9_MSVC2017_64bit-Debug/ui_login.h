/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QSplitter *splitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *login_lineEdit;
    QLabel *label_2;
    QLineEdit *password_lineEdit;
    QPushButton *loginButton;

    void setupUi(QDialog *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(514, 319);
        splitter = new QSplitter(Login);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(110, 40, 306, 211));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        login_lineEdit = new QLineEdit(layoutWidget);
        login_lineEdit->setObjectName(QStringLiteral("login_lineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, login_lineEdit);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        password_lineEdit = new QLineEdit(layoutWidget);
        password_lineEdit->setObjectName(QStringLiteral("password_lineEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, password_lineEdit);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

        splitter->addWidget(layoutWidget);
        loginButton = new QPushButton(splitter);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        splitter->addWidget(loginButton);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QDialog *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("Login", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Zaloguj si\304\231 do GIMS</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Login:</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("Login", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">Has\305\202o:</span></p></body></html>", Q_NULLPTR));
        loginButton->setText(QApplication::translate("Login", "Zaloguj ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
