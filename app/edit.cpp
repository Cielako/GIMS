#include "edit.h"
#include "ui_edit.h"

Edit::Edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit),query(new QSqlQuery),msgBox(new QMessageBox)
{
    ui->setupUi(this);
    this->setWindowTitle("Edytuj towar w magazynie");
    this->setWindowIcon(QIcon(":/images/edit.png"));
}

Edit::~Edit()
{
    delete ui;
    delete msgBox;// Komunikat aplikacji
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
    if(ui->lineEditProductCode->text().isEmpty() || ui->lineEditProductName->text().isEmpty() || ui->lineEditProductCategory->text().isEmpty() || ui->lineEditProductDesc->text().isEmpty() || ui->lineEditProductQuantity->text().isEmpty()){
        msgBox->setText("Wprowadzono nieprawidłową wartość lub pole pozostało puste");
        msgBox->setWindowIcon(QIcon(":/images/warning.png"));
        msgBox->setWindowTitle("Napotkano błąd");
        msgBox->exec();

    }
    else{
        query->prepare("UPDATE towary SET kod = :kod, nazwa = :nazwa, kategoria = :kategoria, opis = :opis, ilosc = :ilosc WHERE kod = :kod" );
        query->bindValue(":kod", ui->lineEditProductCode->text().toInt());
        query->bindValue(":nazwa", ui->lineEditProductName->text());
        query->bindValue(":kategoria", ui->lineEditProductCategory->text().toLower());
        query->bindValue(":opis", ui->lineEditProductDesc->text());
        query->bindValue(":ilosc",ui->lineEditProductQuantity->text().toInt());
        //query->prepare("UPDATE towary SET kod = :kod WHERE kod = :kod");
        query->exec();
        this->close();
    }

}



void Edit::on_CancelEditProductButton_clicked()
{
    this -> close();// Zamykamy otwarte okno
    qDebug() << "Anulowano Edycję";
}
