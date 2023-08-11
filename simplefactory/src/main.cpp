#include <cassert>
#include <iostream>
#include <memory>
#include "AbstractProduct.h"
#include "SimpleFactory.h"

using namespace ketop::dp;


int main()
{
    std::shared_ptr<AbstractProduct> pd1 = SimpleFactory::instance().createProduct("FootBall");
    assert(pd1 != nullptr);
    pd1->display();
    std::shared_ptr<AbstractProduct> pd2 = SimpleFactory::instance().createProduct("BasketBall");
    assert(pd2 != nullptr);
    pd2->display();

    std::shared_ptr<AbstractProduct> pd3 = SimpleFactory::instance().createProduct("FootBall");
    assert(pd3 != nullptr);
    pd3->display();
    std::shared_ptr<AbstractProduct> pd4 = SimpleFactory::instance().createProduct("BasketBall");
    assert(pd4 != nullptr);
    pd4->display();

    return 0;
}