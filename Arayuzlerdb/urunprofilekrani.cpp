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
    QSqlQuery q;
         QString data= "",secilenurun;
         secilenurun=ui->lineEdit_4->text();

        if( q.exec("SELECT * FROM URUNKAYDI WHERE urunadi=\'"+secilenurun+"\'")) // o ürün adına sahip kayıtları text edit ile ekrana bas.
{
         if(q.next())//q nun next i varsa bas demek son girilen urunun next i olmadığı için sonuncuyu basmıyor.
         {
             data += q.value(0).toString() + "\n";
             data += q.value(1).toString() + "\n";
             data += q.value(2).toString() + "\n";
             data += q.value(3).toString() + "₺\n";
             data += q.value(4).toString() + "\n\n";

             ui->textEdit->setText(data);
             q.clear();
         }
         else {

         ui->label_5->setText("Ürün adı yanlış! TEKRAR DENEYİN!");

         ui->lineEdit_4->clear();
         ui->textEdit->clear();
}
        }
        }

void urunprofilekrani::on_pushButton_4_clicked()
{
    new_iletisim->show();
}
