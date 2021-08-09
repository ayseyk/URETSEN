#ifndef URUNKAYITEKRANI_H
#define URUNKAYITEKRANI_H

#include <QWidget>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QDialog>
#include <QMessageBox>

namespace Ui {
class UrunKayitEkrani;
}

class UrunKayitEkrani : public QWidget
{
    Q_OBJECT

public:
    explicit UrunKayitEkrani(QWidget *parent = nullptr);
    ~UrunKayitEkrani();

private slots:

    void on_pushButton_2_clicked();

signals:
    void add_new_user_clicked();//Ürün kayıt ekranından dönüş için kendi oluşturduğum sinyal

private:
    Ui::UrunKayitEkrani *ui;
    QString seciniz="Seçiniz..";
};

#endif // URUNKAYITEKRANI_H
