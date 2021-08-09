#ifndef TERCIHEKRANI_H
#define TERCIHEKRANI_H

#include <QMainWindow>
#include "ureticiprofil.h"
#include "kategoriekrani.h"

QT_BEGIN_NAMESPACE
namespace Ui { class TercihEkrani; }
QT_END_NAMESPACE

class TercihEkrani : public QMainWindow
{
    Q_OBJECT

public:
    TercihEkrani(QWidget *parent = nullptr);
    ~TercihEkrani();
    void clear_select_fileld(); //Tercih Ekranı'ndaki Check_box'ların içeriklerini temizleyen fonksiyon.

signals:
    void add_user_clicked();

private slots:
    void kaydol_geri_slot(); //Üretici Profil Ekranı'ndan geri butonu ile Tercih Ekranı'na geçiş yapmayı sağlayan slotumuz.
    void uretici_clicked_slot(); //Tercih Ekranı'ndan Üretici Profil Ekranı'na geçiş yapmayı sağlar.
    void tercih_geri_slot(); //Kategori Ekranı'ndan geri butonu ile Tercih Ekranı'na geçişi sağlar.
    void tuketici_clicked_slot(); //Tercih Ekranı'ndan Kategori Ekranı'na geçişi sağlar.

private:
    Ui::TercihEkrani *ui;
    UreticiProfil *new_uretici;
    KategoriEkrani *new_tuketici;
};
#endif // TERCIHEKRANI_H
