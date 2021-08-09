#ifndef URETICIPROFIL_H
#define URETICIPROFIL_H

#include <QWidget>
#include "urunkayitekrani.h"
#include "urunprofilekrani.h"
#include <QWidget>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QDialog>
#include <QMessageBox>
#include <QString>

namespace Ui {
class UreticiProfil;
}
class UreticiProfil : public QWidget
{
    Q_OBJECT

public:
    explicit UreticiProfil(QWidget *parent = nullptr);
    ~UreticiProfil();
    void ekrana_yazdir();

signals:
    void push_geri_2_clicked(); //Üretici Profil Ekranı'ndaki geri butonuna basıldığında oluşturulan sinyaldir.

private slots:
    void on_pushButton_2_clicked(); //Yeni ürün ekle buton sinyali

    void add_new_user_slot(); // Ürün kayıt ekranı dönüş sinyali

    void add_new_user4_slot(); //ürün profil ekranı dönüş sinyali



    void on_pushButton_3_clicked();

private:
    Ui::UreticiProfil *ui;
    UrunKayitEkrani *new_user3;
    urunprofilekrani *new_user4;
};

#endif // URETICIPROFIL_H
