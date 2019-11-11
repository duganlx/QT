#include <QApplication>
#include <QDialog>
#include <QLabel>

int main(int argc, char * argv[])
{
    QApplication a(argc, argv);
    QDialog w;
    QLabel label(&w);
    label.setText("Hello Qt!");
    label.setGeometry(10, 10, 100, 100);
    w.show();
    return a.exec();
}
