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
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *welcome;
    QLabel *labelBasicInfo;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QSplitter *splitter;
    QLabel *labelHomePic;
    QLabel *labelHomeInfo;
    QSplitter *splitter_2;
    QLabel *labelAddPic;
    QLabel *labelAddInfo;
    QSplitter *splitter_3;
    QLabel *labelDelPic;
    QLabel *labelDelInfo;
    QSplitter *splitter_4;
    QLabel *labelExitPic;
    QLabel *labelExitInfo;

    void setupUi(QWidget *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(567, 455);
        About->setStyleSheet(QStringLiteral(""));
        layoutWidget = new QWidget(About);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 535, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        welcome = new QLabel(layoutWidget);
        welcome->setObjectName(QStringLiteral("welcome"));

        verticalLayout->addWidget(welcome);

        labelBasicInfo = new QLabel(layoutWidget);
        labelBasicInfo->setObjectName(QStringLiteral("labelBasicInfo"));

        verticalLayout->addWidget(labelBasicInfo);

        layoutWidget1 = new QWidget(About);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(110, 120, 332, 264));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(layoutWidget1);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        labelHomePic = new QLabel(splitter);
        labelHomePic->setObjectName(QStringLiteral("labelHomePic"));
        labelHomePic->setMinimumSize(QSize(31, 61));
        labelHomePic->setMaximumSize(QSize(31, 61));
        labelHomePic->setStyleSheet(QLatin1String("image: url(:/images/home.png) ;\n"
""));
        splitter->addWidget(labelHomePic);
        labelHomeInfo = new QLabel(splitter);
        labelHomeInfo->setObjectName(QStringLiteral("labelHomeInfo"));
        splitter->addWidget(labelHomeInfo);

        verticalLayout_2->addWidget(splitter);

        splitter_2 = new QSplitter(layoutWidget1);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        labelAddPic = new QLabel(splitter_2);
        labelAddPic->setObjectName(QStringLiteral("labelAddPic"));
        labelAddPic->setMinimumSize(QSize(31, 61));
        labelAddPic->setMaximumSize(QSize(31, 61));
        labelAddPic->setStyleSheet(QStringLiteral("image: url(:/images/add.png)"));
        splitter_2->addWidget(labelAddPic);
        labelAddInfo = new QLabel(splitter_2);
        labelAddInfo->setObjectName(QStringLiteral("labelAddInfo"));
        splitter_2->addWidget(labelAddInfo);

        verticalLayout_2->addWidget(splitter_2);

        splitter_3 = new QSplitter(layoutWidget1);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        labelDelPic = new QLabel(splitter_3);
        labelDelPic->setObjectName(QStringLiteral("labelDelPic"));
        labelDelPic->setMinimumSize(QSize(31, 61));
        labelDelPic->setMaximumSize(QSize(31, 61));
        labelDelPic->setStyleSheet(QStringLiteral("image: url(:/images/delete.png);"));
        splitter_3->addWidget(labelDelPic);
        labelDelInfo = new QLabel(splitter_3);
        labelDelInfo->setObjectName(QStringLiteral("labelDelInfo"));
        splitter_3->addWidget(labelDelInfo);

        verticalLayout_2->addWidget(splitter_3);

        splitter_4 = new QSplitter(layoutWidget1);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        labelExitPic = new QLabel(splitter_4);
        labelExitPic->setObjectName(QStringLiteral("labelExitPic"));
        labelExitPic->setMinimumSize(QSize(31, 61));
        labelExitPic->setMaximumSize(QSize(31, 61));
        labelExitPic->setStyleSheet(QLatin1String("image: url(:/images/exit.png);\n"
""));
        splitter_4->addWidget(labelExitPic);
        labelExitInfo = new QLabel(splitter_4);
        labelExitInfo->setObjectName(QStringLiteral("labelExitInfo"));
        splitter_4->addWidget(labelExitInfo);

        verticalLayout_2->addWidget(splitter_4);


        retranslateUi(About);

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QWidget *About)
    {
        About->setWindowTitle(QApplication::translate("About", "Form", Q_NULLPTR));
        welcome->setText(QApplication::translate("About", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt;\">Witaj w </span><span style=\" font-size:16pt; font-weight:600;\">GIMS</span><span style=\" font-size:16pt;\">, prostej aplikacji do<br/>zarz\304\205dzania zasobami magazynowymi</span></p></body></html>", Q_NULLPTR));
        labelBasicInfo->setText(QApplication::translate("About", "<html><head/><body><p align=\"justify\"><span style=\" font-size:12pt;\">Aplikacja umo\305\274liwia dodawanie, usuwanie, edycj\304\231 i  wyszukiawnie towar\303\263w.</span></p></body></html>", Q_NULLPTR));
        labelHomePic->setText(QApplication::translate("About", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        labelHomeInfo->setText(QApplication::translate("About", "<html><head/><body><p><span style=\" font-size:12pt;\"> - Wy\305\233wietl wszystkie towary w magazynie</span></p></body></html>", Q_NULLPTR));
        labelAddPic->setText(QString());
        labelAddInfo->setText(QApplication::translate("About", "<html><head/><body><p><span style=\" font-size:12pt;\"> - Wy\305\233wietl wszystkie towary w magazynie</span></p></body></html>", Q_NULLPTR));
        labelDelPic->setText(QString());
        labelDelInfo->setText(QApplication::translate("About", "<html><head/><body><p><span style=\" font-size:12pt;\"> - Usu\305\204 wybrane towary z magazynu</span></p></body></html>", Q_NULLPTR));
        labelExitPic->setText(QString());
        labelExitInfo->setText(QApplication::translate("About", "<html><head/><body><p><span style=\" font-size:12pt;\">- Wyjd\305\272 z aplikacji</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
