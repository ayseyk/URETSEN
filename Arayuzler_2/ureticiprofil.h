#ifndef URETICIPROFIL_H
#define URETICIPROFIL_H

#include <QWidget>

namespace Ui {
class UreticiProfil;
}

class UreticiProfil : public QWidget
{
    Q_OBJECT

public:
    explicit UreticiProfil(QWidget *parent = nullptr);
    ~UreticiProfil();

signals:
    void push_geri_2_clicked(); //Üretici Profil Ekranı'ndaki geri butonuna basıldığında oluşturulan sinyaldir.

private:
    Ui::UreticiProfil *ui;
};

#endif // URETICIPROFIL_H
