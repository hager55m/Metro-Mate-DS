#ifndef USERCLASS_H
#define USRCLASS_H
#include <QString>
#include <QVector>

class UserClass
{
public:
    QString Username;
    QString Password;
    QString UserSub;
    static QVector<UserClass> users;
    UserClass();
    UserClass(QString,QString,QString);
    static UserClass thisuser;
};

#endif // USERCLASS_H
