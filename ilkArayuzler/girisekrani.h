#ifndef GIRISEKRANI_H
#define GIRISEKRANI_H

#include <QMainWindow>
#include "tercihekrani.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GirisEkrani; }
QT_END_NAMESPACE

class GirisEkrani : public QMainWindow
{
    Q_OBJECT

public:
    GirisEkrani(QWidget *parent = nullptr);
    ~GirisEkrani();


    void dosyayi_temizleme();

private slots:
    void on_pushButton_clicked();
    void add_new_user_slot();

private:
    Ui::GirisEkrani *ui;

    TercihEkrani *new_login;
};
#endif // GIRISEKRANI_H
