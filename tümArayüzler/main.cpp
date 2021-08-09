#include "girisekrani.h"

#include <QApplication>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>
#include <QDialog>
#include <QMessageBox>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GirisEkrani w;
    w.show();
    return a.exec();

}
