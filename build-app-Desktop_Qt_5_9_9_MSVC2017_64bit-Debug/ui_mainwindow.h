/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_information;
    QAction *action_show_all_productsl;
    QAction *actio_add_product;
    QAction *action_edit_product;
    QAction *action_delete_producy;
    QAction *action_exit_app;
    QWidget *centralwidget;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuO_programie;
    QMenu *menuBaza;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        action_information = new QAction(MainWindow);
        action_information->setObjectName(QStringLiteral("action_information"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_information->setIcon(icon);
        action_show_all_productsl = new QAction(MainWindow);
        action_show_all_productsl->setObjectName(QStringLiteral("action_show_all_productsl"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_show_all_productsl->setIcon(icon1);
        actio_add_product = new QAction(MainWindow);
        actio_add_product->setObjectName(QStringLiteral("actio_add_product"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        actio_add_product->setIcon(icon2);
        action_edit_product = new QAction(MainWindow);
        action_edit_product->setObjectName(QStringLiteral("action_edit_product"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_edit_product->setIcon(icon3);
        action_delete_producy = new QAction(MainWindow);
        action_delete_producy->setObjectName(QStringLiteral("action_delete_producy"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_delete_producy->setIcon(icon4);
        action_exit_app = new QAction(MainWindow);
        action_exit_app->setObjectName(QStringLiteral("action_exit_app"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_exit_app->setIcon(icon5);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(290, 280, 131, 23));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuO_programie = new QMenu(menubar);
        menuO_programie->setObjectName(QStringLiteral("menuO_programie"));
        menuBaza = new QMenu(menubar);
        menuBaza->setObjectName(QStringLiteral("menuBaza"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        toolBar->setMovable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuBaza->menuAction());
        menubar->addAction(menuO_programie->menuAction());
        menuO_programie->addAction(action_information);
        menuBaza->addAction(action_show_all_productsl);
        menuBaza->addAction(actio_add_product);
        menuBaza->addAction(action_edit_product);
        menuBaza->addAction(action_delete_producy);
        menuBaza->addAction(action_exit_app);
        toolBar->addAction(action_show_all_productsl);
        toolBar->addAction(actio_add_product);
        toolBar->addAction(action_edit_product);
        toolBar->addAction(action_delete_producy);
        toolBar->addAction(action_exit_app);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action_information->setText(QApplication::translate("MainWindow", "Informacje", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        action_information->setToolTip(QApplication::translate("MainWindow", "Wy\305\233wietl podstawowe informacje o programie", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        action_information->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_show_all_productsl->setText(QApplication::translate("MainWindow", "Wy\305\233wietl wszystkie towary", Q_NULLPTR));
        actio_add_product->setText(QApplication::translate("MainWindow", "Dodaj Towar", Q_NULLPTR));
        action_edit_product->setText(QApplication::translate("MainWindow", "Edytuj Towar", Q_NULLPTR));
        action_delete_producy->setText(QApplication::translate("MainWindow", "Usu\305\204 Towar", Q_NULLPTR));
        action_exit_app->setText(QApplication::translate("MainWindow", "Zamknij Program", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Po\305\202\304\205cz z baz\304\205 danych", Q_NULLPTR));
        menuO_programie->setTitle(QApplication::translate("MainWindow", "O programie", Q_NULLPTR));
        menuBaza->setTitle(QApplication::translate("MainWindow", "Program", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
