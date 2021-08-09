#include "iletisimekrani.h"
#include "ui_iletisimekrani.h"

iletisimEkrani::iletisimEkrani(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::iletisimEkrani)
{
    ui->setupUi(this);
    ui->pushButton_2->setStyleSheet("background-color:rgb(90,101,127)");
    ui->pushButton_3->setStyleSheet("background-color:rgb(90,101,127)");

    //connect(ui->pushButton,SIGNAL(clicked()),this,SIGNAL(add_new_user_clicked()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SIGNAL(button_iptal_clicked()));
}

iletisimEkrani::~iletisimEkrani()
{
    delete ui;
}



void iletisimEkrani::on_pushButton_2_clicked()
{
    ui->lineEdit_5->clear();
}

void iletisimEkrani::on_pushButton_clicked()
{



    this->close(); // veritabanına kaydet sonra kapat.
}


void iletisimEkrani::on_pushButton_3_clicked()
{
    QString secilen;

    secilen=ui->lineEdit_5->text();

           QSqlQuery q;
           QString data= "";

           q.exec("SELECT telefonnumarasi FROM URUNKAYDI WHERE urunadi=\'"+secilen+"\'");

            while(q.next()){

               data += q.value(0).toString() + "\n";
               data += q.value(1).toString() + "\n";
               data += q.value(2).toString() + "\n";
               data += q.value(3).toString() + "\n";
               data += q.value(4).toString() + "\n";

}
            ui->lineEdit_4->setText(data);
            q.clear();


}
