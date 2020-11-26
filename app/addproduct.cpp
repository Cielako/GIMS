#include "addproduct.h"
#include "ui_addproduct.h"



AddProduct::AddProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddProduct),productInfo(new QStringList)
{
    ui->setupUi(this);
    productInfo->insert(0,"");
    productInfo->insert(1,"");
    productInfo->insert(2,"");
    productInfo->insert(3,"");
    productInfo->insert(4,"");
}

AddProduct::~AddProduct()
{
    delete ui;
    delete productInfo;
}

void AddProduct::on_AddProductButton_clicked()
{
    productInfo->append("zupa");
    productInfo->replace(0,"zupka");
    qDebug() << productInfo->value(0);

    productInfo->replace(0, ui->lineAddProductCode->text());
    productInfo->replace(1, ui->lineAddProductName->text());
    productInfo->replace(2, ui->lineAddProductCategory->text());
    productInfo->replace(3, ui->lineAddProductDesc->text());
    productInfo->replace(4, ui->lineAddProductQuantity->text());

    qDebug() << productInfo->value(0);
    qDebug() << productInfo->value(1);
    qDebug() << productInfo->value(2);
    qDebug() << productInfo->value(3);
    qDebug() << productInfo->value(4);
}

void AddProduct::on_CancelAddProductButton_clicked()
{
    this -> close();// Zamykamy otwarte okno
    qDebug() << "Anulowano Dodanie";
}
