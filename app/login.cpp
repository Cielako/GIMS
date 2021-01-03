
#include "login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    ui->password_lineEdit->setEchoMode(QLineEdit::Password); // hasło jako gwiazdki
}

Login::~Login()
{
    delete ui;
}

 void Login::on_loginButton_clicked()
{
    qDebug() << ui->login_lineEdit->text(); // sprawdzenie zawartości pól
    qDebug() << ui->password_lineEdit->text();

}
