#include "girisekrani.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GirisEkrani w;
    w.show();
    return a.exec();
}
