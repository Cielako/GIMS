#include<QCloseEvent>
#include "login.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login),msgBox(new QMessageBox)
{
    ui->setupUi(this);
    ui->password_lineEdit->setEchoMode(QLineEdit::Password); // hasło jako gwiazdki
    this->setWindowTitle("Zaloguj się");
    this->setWindowIcon(QIcon(":/images/login.png"));
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
    else
    {
        msgBox->setWindowTitle("Napotkano błąd");
        msgBox->setText("Wprowadzono nieprawidłowy login lub hasło");
        msgBox->setWindowIcon(QIcon(":/images/warning.png"));
        msgBox->exec();
    }
}

void Login::closeEvent(QCloseEvent *event)
 {
    //event->ignore();
    exit(0);// zakończ działanie programu
 }
