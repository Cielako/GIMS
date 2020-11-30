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
    QStringList productData; // Lista danych dla nowego produktu
    QStringList my_function( QStringList &productData); // fun zwracająca dane nowego produktu
private slots:
    void on_AddProductButton_clicked();
    void on_CancelAddProductButton_clicked();
private:
    Ui::AddProduct *ui;
};

#endif // ADDPRODUCT_H
