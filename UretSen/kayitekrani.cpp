#include "kayitekrani.h"
#include "ui_kayitekrani.h"

KayitEkrani::KayitEkrani(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KayitEkrani)
{
    ui->setupUi(this);
    ui->button_iptal->setStyleSheet("background-color:rgb(90,101,127)");
    ui->button_kaydet->setStyleSheet("background-color:rgb(90,101,127)");

   connect(ui->button_kaydet,SIGNAL(clicked()),this,SIGNAL(add_new_user_clicked()));
   connect(ui->button_iptal,SIGNAL(clicked()),this,SIGNAL(button_iptal_clicked()));
}

KayitEkrani::~KayitEkrani()
{
    delete ui;
}

void KayitEkrani::clear_line_edit()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
}
void KayitEkrani::on_button_kaydet_clicked()
{
    QString ad,soyad,cinsiyet,dogumtarihi,telefonnumarasi,eposta,kullaniciadi,sifre;
    QSqlQuery query;

    ad=ui->lineEdit->text();
    soyad=ui->lineEdit_2->text();
    cinsiyet=ui->comboBox->currentText();
    dogumtarihi=ui->dateEdit->text();
    telefonnumarasi=ui->lineEdit_3->text();
    eposta=ui->lineEdit_4->text();
    kullaniciadi=ui->lineEdit_5->text();
    sifre=ui->lineEdit_6->text();

    query.prepare("INSERT INTO KULLANICIKAYDI (ad,soyad,cinsiyet,dogumtarihi,telefonnumarasi,eposta,kullaniciadi,sifre) VALUES (:ad,:soyad,:cinsiyet,:dogumtarihi,:telefonnumarasi,:eposta,:kullaniciadi,:sifre)");
    query.bindValue(":ad",ad);
    query.bindValue(":soyad",soyad);
    query.bindValue(":cinsiyet",cinsiyet);
    query.bindValue(":dogumtarihi",dogumtarihi);
    query.bindValue(":telefonnumarasi",telefonnumarasi);
    query.bindValue(":eposta",eposta);
    query.bindValue(":kullaniciadi",kullaniciadi);
    query.bindValue(":sifre",sifre);


    if(query.exec())
    {
        QMessageBox::warning(this,tr("save"),tr("saved"));
    }
    else
    {
        QMessageBox::critical(this,tr("error::"),query.lastError().text());
    }


}
