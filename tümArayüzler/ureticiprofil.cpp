#include "ureticiprofil.h"
#include "ui_ureticiprofil.h"

UreticiProfil::UreticiProfil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UreticiProfil)
{

    ui->setupUi(this);
    ui->pushButton_2->setStyleSheet("background-color:rgb(90,101,127)");
    ui->push_geri_2->setStyleSheet("background-color:rgb(90,101,127)");
    ui->pushButton_3->setStyleSheet("background-color:rgb(90,101,127)");


    connect(ui->push_geri_2, SIGNAL(clicked()),this, SIGNAL(push_geri_2_clicked()));

    new_user3 = new UrunKayitEkrani();
    connect(new_user3, SIGNAL(add_new_user_clicked()), this, SLOT(add_new_user_slot()));

    new_user4 = new urunprofilekrani();
    connect(new_user4, SIGNAL(add_new_user4_clicked()), this, SLOT(add_new_user4_slot()));

   ekrana_yazdir();
}

UreticiProfil::~UreticiProfil()
{
    delete ui;
}

void UreticiProfil::ekrana_yazdir()
{
    QString data= "";
   }

void UreticiProfil::on_pushButton_2_clicked()// Yeni ürün ekle buton sinyali
{
    ekrana_yazdir();
    new_user3 ->show();
    ui->pushButton_3->setText("Ürünlerimi Güncelle");
}

void UreticiProfil::add_new_user_slot()
{
   ekrana_yazdir();
   new_user3 ->close();
}

void UreticiProfil::add_new_user4_slot()
{
     new_user4 -> close();

}

void UreticiProfil::on_pushButton_3_clicked()
{
    ekrana_yazdir();
    ui->label_4->setText("Güncelleme başarılı.");
}
