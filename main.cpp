
#include "mainwindow.h"

#include <QApplication>

#include <QFile>


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QFile file(":/CustomTheme.qss");
    file.open(QFile::ReadOnly);

    QString styleSheet { QLatin1String(file.readAll()) };

    app.setStyleSheet(styleSheet);

    MainWindow window;
    window.show();
    return app.exec();
}
