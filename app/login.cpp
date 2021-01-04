#include<QCloseEvent>
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
     login = ui->login_lineEdit->text();
     password = ui->password_lineEdit->text();
    //qDebug() << ui->login_lineEdit->text(); // sprawdzenie zawartości pól
    //qDebug() << ui->password_lineEdit->text();
    db_connect db;
    if(db.user_connect(login,password) == true) // Jeśli True zamknij okno
    {
        qApp->exit();
    }
}

 void Login::closeEvent(QCloseEvent *event)
 {
    event->ignore();

 }
