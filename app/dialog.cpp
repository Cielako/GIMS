#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_exit_yes_no_accepted()
{
    qApp->exit(); // Zamykamy aplikację
}

void Dialog::on_exit_yes_no_rejected()
{

}
