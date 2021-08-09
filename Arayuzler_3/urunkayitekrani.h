#ifndef URUNKAYITEKRANI_H
#define URUNKAYITEKRANI_H

#include <QWidget>

namespace Ui {
class UrunKayitEkrani;
}

class UrunKayitEkrani : public QWidget
{
    Q_OBJECT

public:
    explicit UrunKayitEkrani(QWidget *parent = nullptr);
    ~UrunKayitEkrani();

signals:
    void add_new_user_clicked();//Ürün kayıt ekranından dönüş için kendi oluşturduğum sinyal

private:
    Ui::UrunKayitEkrani *ui;
};

#endif // URUNKAYITEKRANI_H
