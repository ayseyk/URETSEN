#ifndef KAYITEKRANI_H
#define KAYITEKRANI_H

#include <QWidget>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QDialog>
#include <QMessageBox>

namespace Ui {
class KayitEkrani;
}

class KayitEkrani : public QWidget
{
    Q_OBJECT

public:
    explicit KayitEkrani(QWidget *parent = nullptr);
    ~KayitEkrani();
    void clear_line_edit(); //Kayıt Ekranı'ndaki verileri temizleyen fonksiyonumuzdur.

signals:
    void add_new_user_clicked(); //Kaydet butonuyla Giriş Ekranı arasındaki ilişkiyi kuran sinyalimiz.
    void button_iptal_clicked(); //İptal butonuyla Giriş Ekranı arasındaki ilişkiyi kuran sinyalimiz.


private slots:
    void on_button_kaydet_clicked();

private:
    Ui::KayitEkrani *ui;
};

#endif // KAYITEKRANI_H
