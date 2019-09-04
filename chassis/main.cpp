#include "chassisui.h"
#include "dbconnection.h"
#include <QApplication>
#include <QProcess>
#include<QStyleFactory>                           //修改风格1步

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle(QStyleFactory::create("fusion"));   //修改风格2步
    QProcess process;
    process.start("C:/mysql-8.0.17-winx64/bin/mysqld.exe");
//    if (!createConnection())
//        return 1;
    chassisUI w;
    w.show();

    return a.exec();
}
