#ifndef KATEGORIEKRANI_H
#define KATEGORIEKRANI_H

#include <QWidget>

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

private:
    Ui::KategoriEkrani *ui;
};

#endif // KATEGORIEKRANI_H
