#include "urunkayitekrani.h"
#include "ui_urunkayitekrani.h"

UrunKayitEkrani::UrunKayitEkrani(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UrunKayitEkrani)
{
    ui->setupUi(this);

    ui->pushButton->setStyleSheet("background-color:rgb(90,101,127)");
    ui->pushButton_2->setStyleSheet("background-color:rgb(90,101,127)");

    connect(ui->pushButton,SIGNAL(clicked()),this,SIGNAL(add_new_user_clicked()));
    connect(ui->pushButton_2,SIGNAL(add_new_user_clicked()),this,SLOT(on_pushButton_2_clicked()));
}

UrunKayitEkrani::~UrunKayitEkrani()
{
    delete ui;
}

void UrunKayitEkrani::on_pushButton_2_clicked()
{
    QString urunadi,urunbilgileri,kategoriler,fiyat;
    QSqlQuery query;

    urunadi=ui->lineEdit_7->text();
    urunbilgileri=ui->lineEdit_8->text();
    kategoriler=ui->comboBox_3->currentText();
    fiyat=ui->lineEdit_9->text();

    query.prepare("INSERT INTO URUNKAYDI (urunadi,urunbilgileri,kategoriler,fiyat) VALUES (:urunadi,:urunbilgileri,:kategoriler,:fiyat)");
    query.bindValue(":urunadi",urunadi);
    query.bindValue(":urunbilgileri",urunbilgileri);
    query.bindValue(":kategoriler",kategoriler);
    query.bindValue(":fiyat",fiyat);

    ui->comboBox_3->setCurrentText(seciniz);

    if(query.exec())
    {
        QMessageBox::warning(this,tr("save"),tr("saved"));

    }
    else
    {
        QMessageBox::critical(this,tr("error::"),query.lastError().text());
    }

   ui->lineEdit_7->clear();
   ui->lineEdit_8->clear();
   ui->lineEdit_9->clear();

     this->close();
}
