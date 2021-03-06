#include "girisekrani.h"
#include "ui_girisekrani.h"


GirisEkrani::GirisEkrani(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GirisEkrani)

{
    ui->setupUi(this);
    ui->pushButton->setStyleSheet("background-color:rgb(90,101,127)");
    ui->pushButton_2->setStyleSheet("background-color:rgb(90,101,127)");

    // Gelen sinyal ile ilgili slotlar arası bağlantıyı kurduğumuz kısım.

    new_login= new TercihEkrani();
    connect(new_login, SIGNAL(add_user_clicked()), this ,SLOT(add_new_user_slot()));

    new_user= new KayitEkrani(); // Gelen sinyal ile ilgili slotlar arası bağlantıyı kurduğumuz kısım.
    connect(new_user,SIGNAL(add_new_user_clicked()), this, SLOT(new_user_slot()));
    connect(new_user, SIGNAL(button_iptal_clicked()),this, SLOT(iptal_slot()));

}


GirisEkrani::~GirisEkrani()
{
    delete ui;
}

void GirisEkrani::on_pushButton_clicked()
{
    new_login->show();
}

void GirisEkrani::add_new_user_slot()
{
    new_login->close();
}

void GirisEkrani::dosyayi_temizleme()
{
    ui->kullanici->clear();
    ui->sifre->clear();
}

void GirisEkrani::iptal_slot()
{
    new_user->close();
    new_user->clear_line_edit();
}

void GirisEkrani::new_user_slot()

{
    new_user->close();
    new_user->clear_line_edit();
}

void GirisEkrani::on_pushButton_2_clicked()
{
    new_user->show();
    dosyayi_temizleme();
}
