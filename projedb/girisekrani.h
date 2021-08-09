#ifndef GIRISEKRANI_H
#define GIRISEKRANI_H

#include <QMainWindow>
#include "tercihekrani.h"
#include "kayitekrani.h"
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QDialog>
#include <QMessageBox>



QT_BEGIN_NAMESPACE
namespace Ui { class GirisEkrani; }
QT_END_NAMESPACE

class GirisEkrani : public QMainWindow
{
    Q_OBJECT

public:
    GirisEkrani(QSqlDatabase *db, QWidget *parent = nullptr);
    ~GirisEkrani();
    void dosyayi_temizleme();


private slots:
    void on_pushButton_clicked();
    void add_new_user_slot();

    void on_pushButton_2_clicked(); //Kayıt Ekranı'nın açılmasını sağlayan slotumuz.
    void iptal_slot(); //Kayıt Ekranı'ndan İptal butonuyla Giriş Ekranı'na geri dönmeyi sağlar.
    void new_user_slot(); //Kayıt Ekranı'ndan Kaydet butonuyla birlikte verileri kaydedip Giriş Ekranı'na dönmeyi sağlar.

private:
    Ui::GirisEkrani *ui;
    QSqlDatabase *db;


    TercihEkrani *new_login;
    KayitEkrani *new_user;

};
#endif // GIRISEKRANI_H
