#include "urunprofilekrani.h"
#include "ui_urunprofilekrani.h"


urunprofilekrani::urunprofilekrani(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::urunprofilekrani)
{
    ui->setupUi(this);
    ui->pushButton->setStyleSheet("background-color:rgb(90,101,127)");
    ui->pushButton_4->setStyleSheet("background-color:rgb(90,101,127)");
    ui->pushButton_5->setStyleSheet("background-color:rgb(90,101,127)");

    connect(ui->pushButton_5,SIGNAL(clicked()), this, SIGNAL(add_new_user4_clicked())); //urun profil ekranına gidiş

    connect(ui->pushButton_5,SIGNAL(clicked()),this,SIGNAL(button_iptal_clicked()));

     // Gelen sinyal ile ilgili slotlar arası bağlantıyı kurduğumuz kısım.
    new_iletisim= new iletisimEkrani();

    connect(new_iletisim,SIGNAL(add_new_iletisim_clicked()), this, SLOT(on_pushButton_4_clicked()));
    connect(new_iletisim, SIGNAL(button_iptal_clicked()),this, SLOT(iletisim_iptal_slot()));


}

urunprofilekrani::~urunprofilekrani()
{
    delete ui;
}

void urunprofilekrani::on_pushButton_5_clicked()
{
    ui->lineEdit_4->clear();
    ui->textEdit->clear();
}


void urunprofilekrani::iletisim_iptal_slot()
{
    new_iletisim->close();

}

void urunprofilekrani::gonder_slot()
{
    new_iletisim->close();
}

void urunprofilekrani::on_pushButton_clicked()
{
         QString data= "",secilenurun;

 }

void urunprofilekrani::on_pushButton_4_clicked()
{
    new_iletisim->show();
}
