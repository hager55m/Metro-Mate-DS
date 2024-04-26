#ifndef PUBLICCLASS_H
#define PUBLICCLASS_H
#include"subscriptionclass.h"
class PublicClass :public SubscriptionClass
{
    public:
    int duration;
    int Amount_Of_Money;
    PublicClass();
    PublicClass(int,int);
    PublicClass(SubscriptionClass);
};

#endif // PUBLICCLASS_H
