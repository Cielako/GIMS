#include "edit.h"
#include "ui_edit.h"

Edit::Edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit),query(new QSqlQuery)
{
    ui->setupUi(this);
}

Edit::~Edit()
{
    delete ui;
}

int Edit::passEditData(QString dane[])
{

    ui->lineEditProductCode->setText(dane[0]);
    ui->lineEditProductName->setText(dane[1]);
    ui->lineEditProductCategory->setText(dane[2]);
    ui->lineEditProductDesc->setText(dane[3]);
    ui->lineEditProductQuantity->setText(dane[4]);

    qDebug() << dane[2];
    return dane[0].toInt();
}
void Edit::on_EditProductButton_clicked()
{
    // zapytanie do bazy danych dodające nowy produkt
    query->prepare("UPDATE towary SET kod = :kod, nazwa = :nazwa, kategoria = :kategoria, opis = :opis, ilosc = :ilosc WHERE kod = :kod" );
    query->bindValue(":kod", ui->lineEditProductCode->text().toInt());
    query->bindValue(":nazwa", ui->lineEditProductName->text());
    query->bindValue(":kategoria", ui->lineEditProductCategory->text().toLower());
    query->bindValue(":opis", ui->lineEditProductDesc->text());
    query->bindValue(":ilosc",ui->lineEditProductQuantity->text().toInt());
    query->exec();
    query->prepare("UPDATE towary SET kod = :kod WHERE kod = :kod");
}


