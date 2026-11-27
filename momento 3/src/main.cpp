#include <QApplication>
#include <QMainWindow>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    QMainWindow ventana;
    ventana.setWindowTitle("Sonic 1903 - Operacion Istmo de Panama");
    ventana.resize(960, 540);
    ventana.show();
    return app.exec();
}
