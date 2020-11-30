#include "addproduct.h"
#include "ui_addproduct.h"



AddProduct::AddProduct(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddProduct)
{
    ui->setupUi(this);
    for (int i = 0; i <= 4; ++i) { // utworzenie elementów listy nowego produktu
        //productInfo->insert(i,"");
        productData.insert(i,"");
    }
}
AddProduct::~AddProduct()
{
    delete ui;
}
QStringList AddProduct::my_function (QStringList &productData)
{
    productData.replace(0, ui->lineAddProductCode->text());
    productData.replace(1, ui->lineAddProductName->text());
    productData.replace(2, ui->lineAddProductCategory->text());
    productData.replace(3, ui->lineAddProductDesc->text());
    productData.replace(4, ui->lineAddProductQuantity->text());
    return productData;
}
void AddProduct::on_AddProductButton_clicked() // Dodanie nowego produktu do bazy danych
{
    my_function (productData);
    qDebug() <<productData.value(1);
}

void AddProduct::on_CancelAddProductButton_clicked()
{
    this -> close();// Zamykamy otwarte okno
    qDebug() << "Anulowano Dodanie";
}
