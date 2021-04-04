#ifndef COFFEE_H
#define COFFEE_H

#include "caffeinebeverage.h"
#include <QString>

class Coffee : public CaffeineBeverage{
public:
    Coffee();
    virtual void brew();
    virtual void addCondiments();
    virtual bool customerWantsCondiments();
    QString getUserInput();
};

#endif // COFFEE_H
