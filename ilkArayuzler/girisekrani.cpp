#include "girisekrani.h"
#include "ui_girisekrani.h"


GirisEkrani::GirisEkrani(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GirisEkrani)
{
    ui->setupUi(this);

    ui->pushButton->setStyleSheet("background-color:rgb(90,101,127)");
    ui->pushButton_2->setStyleSheet("background-color:rgb(90,101,127)");

    new_login= new TercihEkrani();
    connect(new_login, SIGNAL(add_user_clicked()), this ,SLOT(add_new_user_slot()));
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
    dosyayi_temizleme();

}
void GirisEkrani::dosyayi_temizleme()
{
    ui->kullanici->clear();

    ui->sifre->clear();

}

