/********************************************************************************
** Form generated from reading UI file 'addproduct.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDPRODUCT_H
#define UI_ADDPRODUCT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddProduct
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelAdd;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineAddProductCode;
    QLineEdit *lineAddProductName;
    QLineEdit *lineAddProductCategory;
    QLineEdit *lineAddProductDesc;
    QLineEdit *lineAddProductQuantity;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelProductCode;
    QLabel *labelProductName;
    QLabel *labelProductCategory;
    QLabel *labelProductDesc;
    QLabel *labelProductQuantity;
    QSplitter *splitter;
    QPushButton *AddProductButton;
    QPushButton *CancelAddProductButton;

    void setupUi(QWidget *AddProduct)
    {
        if (AddProduct->objectName().isEmpty())
            AddProduct->setObjectName(QStringLiteral("AddProduct"));
        AddProduct->resize(400, 300);
        layoutWidget = new QWidget(AddProduct);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(70, 10, 271, 241));
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
        lineAddProductCode = new QLineEdit(layoutWidget);
        lineAddProductCode->setObjectName(QStringLiteral("lineAddProductCode"));

        verticalLayout->addWidget(lineAddProductCode);

        lineAddProductName = new QLineEdit(layoutWidget);
        lineAddProductName->setObjectName(QStringLiteral("lineAddProductName"));

        verticalLayout->addWidget(lineAddProductName);

        lineAddProductCategory = new QLineEdit(layoutWidget);
        lineAddProductCategory->setObjectName(QStringLiteral("lineAddProductCategory"));

        verticalLayout->addWidget(lineAddProductCategory);

        lineAddProductDesc = new QLineEdit(layoutWidget);
        lineAddProductDesc->setObjectName(QStringLiteral("lineAddProductDesc"));

        verticalLayout->addWidget(lineAddProductDesc);

        lineAddProductQuantity = new QLineEdit(layoutWidget);
        lineAddProductQuantity->setObjectName(QStringLiteral("lineAddProductQuantity"));

        verticalLayout->addWidget(lineAddProductQuantity);


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
        AddProductButton = new QPushButton(splitter);
        AddProductButton->setObjectName(QStringLiteral("AddProductButton"));
        splitter->addWidget(AddProductButton);
        CancelAddProductButton = new QPushButton(splitter);
        CancelAddProductButton->setObjectName(QStringLiteral("CancelAddProductButton"));
        splitter->addWidget(CancelAddProductButton);

        formLayout->setWidget(1, QFormLayout::SpanningRole, splitter);


        verticalLayout_3->addLayout(formLayout);


        retranslateUi(AddProduct);

        QMetaObject::connectSlotsByName(AddProduct);
    } // setupUi

    void retranslateUi(QWidget *AddProduct)
    {
        AddProduct->setWindowTitle(QApplication::translate("AddProduct", "Form", Q_NULLPTR));
        labelAdd->setText(QApplication::translate("AddProduct", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">Dodaj nowy Produkt</span></p></body></html>", Q_NULLPTR));
        labelProductCode->setText(QApplication::translate("AddProduct", "Kod", Q_NULLPTR));
        labelProductName->setText(QApplication::translate("AddProduct", "Nazwa", Q_NULLPTR));
        labelProductCategory->setText(QApplication::translate("AddProduct", "Kategoria", Q_NULLPTR));
        labelProductDesc->setText(QApplication::translate("AddProduct", "Opis", Q_NULLPTR));
        labelProductQuantity->setText(QApplication::translate("AddProduct", "Ilo\305\233\304\207", Q_NULLPTR));
        AddProductButton->setText(QApplication::translate("AddProduct", "Dodaj", Q_NULLPTR));
        CancelAddProductButton->setText(QApplication::translate("AddProduct", "Anuluj ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddProduct: public Ui_AddProduct {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDPRODUCT_H
