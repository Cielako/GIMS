#ifndef EDIT_H
#define EDIT_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>


namespace Ui {
class Edit;
}

class Edit : public QDialog
{
    Q_OBJECT

public:
    explicit Edit(QWidget *parent = nullptr);
    ~Edit();
     int passEditData(QString[5]);

private:
    Ui::Edit *ui;
    QSqlQuery *query;
    QMessageBox *msgBox;


private slots:
   void on_EditProductButton_clicked();
};

#endif // EDIT_H
