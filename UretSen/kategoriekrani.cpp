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
    QString girilen;
    girilen=ui->lineEdit_4->text();
    QSqlQuery query;

    if(query.exec("SELECT urunadi FROM URUNKAYDI WHERE urunadi=\'"+girilen+"\'"))
       {
           if(query.next())
             {
                  QMessageBox::information(this,tr("Giriş Başarılı!"),tr("Giriş Başarılı!"));

                  new_urun->show();
             }
           else QMessageBox::warning(this,tr("Hatalı ürün adı!!"),tr("Hatalı ürün adı!!"));
      }


    ui->lineEdit_4->clear();
}

void KategoriEkrani::iptal_slot()
{
    new_urun->close();
}

void KategoriEkrani::on_comboBox_kategori_currentTextChanged(const QString &)
{
    QString kategori,secilenurun;
    QSqlQuery query;

    secilenurun=ui->lineEdit_4->text();
    kategori=ui->comboBox_kategori->currentText();

    if(query.exec("SELECT kategori FROM URUNKAYDI WHERE kategoriler=\'"+kategori+"\'"))
       {
           if(query.next())
             {
                  ui->label_6->setText("Görmek istediğiniz ürünün adını girebilirsiniz.");

                  QSqlQuery q;
                  QString data= "";
                  q.exec("SELECT * FROM URUNKAYDI WHERE kategoriler=\'"+kategori+"\'");

                  while(q.next())
                  {
                      data += q.value(0).toString() + "\n";
                      data += q.value(1).toString() + "\n";
                      data += q.value(2).toString() + "\n";
                      data += q.value(3).toString() + "₺\n";
                      data += q.value(4).toString() + "\n\n";
                  }

                  ui->textEdit->setText(data);
                   q.clear();
             }

          else
             {
               ui->label_6->setText("Yanlış kategori! TEKRAR DENEYİN!");
               ui->textEdit->clear();
               ui->comboBox_kategori->setCurrentText(seciniz);
             }
   }

}
