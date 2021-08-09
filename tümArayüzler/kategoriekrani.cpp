#include "kategoriekrani.h"
#include "ui_kategoriekrani.h"

KategoriEkrani::KategoriEkrani(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::KategoriEkrani)
{
    ui->setupUi(this);
    ui->pushButton->setStyleSheet("background-color:rgb(90,101,127)");
    ui->pushButton_2->setStyleSheet("background-color:rgb(90,101,127)");

    connect(ui->pushButton, SIGNAL(clicked()),this, SIGNAL(push_button_clicked()));

    new_urun= new urunprofilekrani;
    connect(new_urun,SIGNAL(urun_clicked()), this, SLOT(new_user_slot()));
    connect(new_urun,SIGNAL(button_iptal_clicked()),this, SLOT(iptal_slot()));
}

KategoriEkrani::~KategoriEkrani()
{
    delete ui;
}

void KategoriEkrani::on_pushButton_2_clicked()
{
    new_urun->show();
    ui->lineEdit_4->clear();
}

void KategoriEkrani::iptal_slot()
{
    new_urun->close();
}

void KategoriEkrani::on_comboBox_kategori_currentTextChanged(const QString &)
{
    QString kategori,secilenurun;

    secilenurun=ui->lineEdit_4->text();

}
