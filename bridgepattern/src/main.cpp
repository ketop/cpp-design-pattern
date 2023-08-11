#include <cassert>
#include <iostream>
#include <memory>
#include "AbstactInterface.h"
#include "AbstractImplement.h"
#include "RefineInterface.h"
#include "ConcreteImplement.h"

using namespace ketop::dp;


int main()
{
    std::shared_ptr<AbstractImplement> imp1 = std::make_shared<ConcreteImplement>("shirt");
    std::shared_ptr<AbstractImplement> imp2 = std::make_shared<ConcreteImplement>("shoes");
    std::shared_ptr<AbstractInterface> interf1 = std::make_shared<RefineInterface>(imp1);
    std::shared_ptr<AbstractInterface> interf2 = std::make_shared<RefineInterface>(imp2);
    interf1->operation();
    interf2->operation();
    return 0;

}