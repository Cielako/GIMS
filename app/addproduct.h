#ifndef ADDPRODUCT_H
#define ADDPRODUCT_H

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QString>

namespace Ui {
class AddProduct;
}

class AddProduct : public QDialog
{
    Q_OBJECT

public:
    explicit AddProduct(QWidget *parent = nullptr);
    ~AddProduct();

private slots:
    void on_AddProductButton_clicked();

    void on_CancelAddProductButton_clicked();

private:
    Ui::AddProduct *ui;
    QStringList *productInfo; // dodano jakby się wywalił program
};

#endif // ADDPRODUCT_H
