#ifndef LOGIN_H
#define LOGIN_H


#include <QDialog>
#include "ui_login.h"
#include "database.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

private slots:
    void on_loginButton_clicked();
    void closeEvent(QCloseEvent *event);


private:
    Ui::Login *ui;
    QString login;
    QString password;
    QMessageBox *msgBox;
};

#endif // LOGIN_H
