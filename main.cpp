#include<QApplication>
#include<QDebug>

int main(int argc, char *argv[])
{
    qDebug()<<"main:: starts\n";
    QApplication app(argc,argv);
    qDebug()<<"main:: end\n";
    return app.exec();
}

