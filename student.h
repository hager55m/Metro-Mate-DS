#ifndef STUDENT_H
#define STUDENT_H
#include <subscriptionclass.h>

class Student  : public SubscriptionClass
{
    public:
    int Time_Of_Sub;
    int amount_of_money;


    Student(int num);
    Student(SubscriptionClass);
};

#endif // STUDENT_H
