#include "about.h"
#include "ui_about.h"

About::About(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::About)
{
    ui->setupUi(this);
    this->setWindowTitle("Informacje");
    this->setWindowIcon(QIcon(":/images/about.png"));
}

About::~About()
{
    delete ui;
}
