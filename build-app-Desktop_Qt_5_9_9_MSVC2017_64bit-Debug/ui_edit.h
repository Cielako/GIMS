/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Edit
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelAdd;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEditProductCode;
    QLineEdit *lineEditProductName;
    QLineEdit *lineEditProductCategory;
    QLineEdit *lineEditProductDesc;
    QLineEdit *lineEditProductQuantity;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelProductCode;
    QLabel *labelProductName;
    QLabel *labelProductCategory;
    QLabel *labelProductDesc;
    QLabel *labelProductQuantity;
    QSplitter *splitter;
    QPushButton *EditProductButton;
    QPushButton *CancelEditProductButton;

    void setupUi(QDialog *Edit)
    {
        if (Edit->objectName().isEmpty())
            Edit->setObjectName(QStringLiteral("Edit"));
        Edit->resize(400, 300);
        layoutWidget = new QWidget(Edit);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 30, 271, 241));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelAdd = new QLabel(layoutWidget);
        labelAdd->setObjectName(QStringLiteral("labelAdd"));

        verticalLayout_3->addWidget(labelAdd);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        lineEditProductCode = new QLineEdit(layoutWidget);
        lineEditProductCode->setObjectName(QStringLiteral("lineEditProductCode"));

        verticalLayout->addWidget(lineEditProductCode);

        lineEditProductName = new QLineEdit(layoutWidget);
        lineEditProductName->setObjectName(QStringLiteral("lineEditProductName"));

        verticalLayout->addWidget(lineEditProductName);

        lineEditProductCategory = new QLineEdit(layoutWidget);
        lineEditProductCategory->setObjectName(QStringLiteral("lineEditProductCategory"));

        verticalLayout->addWidget(lineEditProductCategory);

        lineEditProductDesc = new QLineEdit(layoutWidget);
        lineEditProductDesc->setObjectName(QStringLiteral("lineEditProductDesc"));

        verticalLayout->addWidget(lineEditProductDesc);

        lineEditProductQuantity = new QLineEdit(layoutWidget);
        lineEditProductQuantity->setObjectName(QStringLiteral("lineEditProductQuantity"));

        verticalLayout->addWidget(lineEditProductQuantity);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        labelProductCode = new QLabel(layoutWidget);
        labelProductCode->setObjectName(QStringLiteral("labelProductCode"));

        verticalLayout_2->addWidget(labelProductCode);

        labelProductName = new QLabel(layoutWidget);
        labelProductName->setObjectName(QStringLiteral("labelProductName"));

        verticalLayout_2->addWidget(labelProductName);

        labelProductCategory = new QLabel(layoutWidget);
        labelProductCategory->setObjectName(QStringLiteral("labelProductCategory"));

        verticalLayout_2->addWidget(labelProductCategory);

        labelProductDesc = new QLabel(layoutWidget);
        labelProductDesc->setObjectName(QStringLiteral("labelProductDesc"));

        verticalLayout_2->addWidget(labelProductDesc);

        labelProductQuantity = new QLabel(layoutWidget);
        labelProductQuantity->setObjectName(QStringLiteral("labelProductQuantity"));

        verticalLayout_2->addWidget(labelProductQuantity);


        formLayout->setLayout(0, QFormLayout::FieldRole, verticalLayout_2);

        splitter = new QSplitter(layoutWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        EditProductButton = new QPushButton(splitter);
        EditProductButton->setObjectName(QStringLiteral("EditProductButton"));
        splitter->addWidget(EditProductButton);
        CancelEditProductButton = new QPushButton(splitter);
        CancelEditProductButton->setObjectName(QStringLiteral("CancelEditProductButton"));
        splitter->addWidget(CancelEditProductButton);

        formLayout->setWidget(1, QFormLayout::SpanningRole, splitter);


        verticalLayout_3->addLayout(formLayout);


        retranslateUi(Edit);

        QMetaObject::connectSlotsByName(Edit);
    } // setupUi

    void retranslateUi(QDialog *Edit)
    {
        Edit->setWindowTitle(QApplication::translate("Edit", "Dialog", Q_NULLPTR));
        labelAdd->setText(QApplication::translate("Edit", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Edytuj towar</span></p></body></html>", Q_NULLPTR));
        labelProductCode->setText(QApplication::translate("Edit", "Kod", Q_NULLPTR));
        labelProductName->setText(QApplication::translate("Edit", "Nazwa", Q_NULLPTR));
        labelProductCategory->setText(QApplication::translate("Edit", "Kategoria", Q_NULLPTR));
        labelProductDesc->setText(QApplication::translate("Edit", "Opis", Q_NULLPTR));
        labelProductQuantity->setText(QApplication::translate("Edit", "Ilo\305\233\304\207", Q_NULLPTR));
        EditProductButton->setText(QApplication::translate("Edit", "Edytuj", Q_NULLPTR));
        CancelEditProductButton->setText(QApplication::translate("Edit", "Anuluj ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Edit: public Ui_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
