#ifndef ILETISIMEKRANI_H
#define ILETISIMEKRANI_H

#include <QWidget>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QDialog>
#include <QMessageBox>

namespace Ui {
class iletisimEkrani;
}

class iletisimEkrani : public QWidget
{
    Q_OBJECT

public:
    explicit iletisimEkrani(QWidget *parent = nullptr);
    ~iletisimEkrani();

signals:
    void add_new_iletisim_clicked();
    void button_iptal_clicked();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::iletisimEkrani *ui;

};

#endif // ILETISIMEKRANI_H
