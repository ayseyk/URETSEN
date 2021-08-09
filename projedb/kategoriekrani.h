#ifndef KATEGORIEKRANI_H
#define KATEGORIEKRANI_H

#include <QWidget>
#include <QWidget>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QDialog>
#include <QMessageBox>
#include "urunprofilekrani.h"


namespace Ui {
class KategoriEkrani;
}

class KategoriEkrani : public QWidget
{
    Q_OBJECT

public:
    explicit KategoriEkrani(QWidget *parent = nullptr);
    ~KategoriEkrani();

signals:
    void push_button_clicked(); //Kategori Ekranı'ndaki geri butonuna basıldığında oluşturulan sinyaldir.
    void button_iptal_clicked();

private slots:
    void on_pushButton_2_clicked();

    void iptal_slot();

    void on_comboBox_kategori_currentTextChanged(const QString &arg1);

private:
    Ui::KategoriEkrani *ui;
    urunprofilekrani *new_urun;
    QString girilen;
    QString seciniz="Seçiniz..";
};

#endif // KATEGORIEKRANI_H
