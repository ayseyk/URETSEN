#ifndef URUNPROFILEKRANI_H
#define URUNPROFILEKRANI_H

#include <QWidget>
#include <QWidget>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QDialog>
#include <QMessageBox>
#include "iletisimekrani.h"

namespace Ui {
class urunprofilekrani;
}

class urunprofilekrani : public QWidget
{
    Q_OBJECT

public:
    explicit urunprofilekrani(QWidget *parent = nullptr);
    ~urunprofilekrani();


signals:
    void add_new_user4_clicked();
    void button_iptal_clicked();
    void geri_clicked();


private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    //void on_pushButton_iletisim();
    void iletisim_iptal_slot();
    void gonder_slot();

    void on_pushButton_4_clicked();

private:
    Ui::urunprofilekrani *ui;
    iletisimEkrani *new_iletisim;
};

#endif // URUNPROFILEKRANI_H
