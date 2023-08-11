#include <cassert>
#include <iostream>
#include <memory>
#include "AbstractPrototype.h"
#include "ConcreteObject.h"

using namespace ketop::dp;


int main()
{
    std::shared_ptr<AbstractPrototype> c1 = std::make_shared<ConcreteObject>("higort", 1);
    std::shared_ptr<AbstractPrototype> c2 = c1->clone();
    c1->display();
    c2->display();
    auto c3 = std::dynamic_pointer_cast<ConcreteObject>(c2);
    c3->setId(2);
    c3->display();
    c3->setName("nice");
    c2->display();
    c1->display();

    return 0;
}