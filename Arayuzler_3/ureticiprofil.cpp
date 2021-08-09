#include "ureticiprofil.h"
#include "ui_ureticiprofil.h"

UreticiProfil::UreticiProfil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UreticiProfil)
{

    ui->setupUi(this);
    ui->pushButton_2->setStyleSheet("background-color:rgb(90,101,127)");
    ui->push_geri_2->setStyleSheet("background-color:rgb(90,101,127)");
    ui->toolButton->setStyleSheet("background-color:rgb(90,101,127)");

    connect(ui->push_geri_2, SIGNAL(clicked()),this, SIGNAL(push_geri_2_clicked()));

    new_user3 = new UrunKayitEkrani();

    connect(new_user3, SIGNAL(add_new_user_clicked()), this, SLOT(add_new_user_slot()));

    new_user4 = new urunprofilekrani();

    connect(new_user4, SIGNAL(add_new_user4_clicked()), this, SLOT(add_new_user4_slot()));
}

UreticiProfil::~UreticiProfil()
{
    delete ui;
}

void UreticiProfil::on_pushButton_2_clicked()// Yeni ürün ekle buton sinyali
{
    new_user3 ->show();
}

void UreticiProfil::add_new_user_slot()
{
    new_user3 ->close();
}

void UreticiProfil::on_LinkButton_3_clicked()// ürün profil ekranı sinyali
{
    new_user4 ->show();
}

void UreticiProfil::add_new_user4_slot()
{
    new_user4 -> close();
}
