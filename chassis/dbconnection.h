#ifndef DBCONNECTION_H
#define DBCONNECTION_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>

static bool createConnection()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("mydata");
    db.setUserName("root");
    db.setPassword("123456");
    if (!db.open())
    {
        QMessageBox::critical(0, QObject::tr("无法打开数据库"),
        "无法创建数据库连接！ ", QMessageBox::Cancel);
        return false;
    }
    qDebug() << "打开数据库！！！";
    return true;
}

#endif // DBCONNECTION_H
