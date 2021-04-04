#ifndef TEA_H
#define TEA_H

#include "caffeinebeverage.h"
#include <QString>

class Tea : public CaffeineBeverage{
public:
    Tea();
    virtual void brew();
    virtual void addCondiments();
    virtual bool customerWantsCondiments();
    QString getUserInput();
};

#endif // TEA_H
