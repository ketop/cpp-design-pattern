#include <cassert>
#include <iostream>
#include <memory>
#include "AbstractDecorator.h"
#include "AbstractProduct.h"
#include "BallProduct.h"
#include "BasketBallDecorator.h"
#include "FootBallDecorator.h"

using namespace ketop::dp;


int main()
{
    std::shared_ptr<AbstractProduct> sp_product = std::make_shared<BallProduct>();
    std::shared_ptr<AbstractDecorator> sp_decorator = std::make_shared<BasketBallDecorator>(sp_product);
    sp_decorator->display();
    std::shared_ptr<AbstractDecorator> sp_decorator1 = std::make_shared<FootBallDecorator>(sp_product);
    sp_decorator1->display();

    return 0;
}