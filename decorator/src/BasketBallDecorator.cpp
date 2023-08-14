#include "BasketBallDecorator.h"
#include "AbstractDecorator.h"
#include "AbstractProduct.h"
#include <iostream>
#include <memory>
using ketop::dp::BasketBallDecorator;

BasketBallDecorator::BasketBallDecorator(std::shared_ptr<AbstractProduct> spProduct): AbstractDecorator(spProduct)
{
}
BasketBallDecorator::~BasketBallDecorator()
{
}
void BasketBallDecorator::display()
{
    std::cout << "BasketBall" << std::endl;
    AbstractDecorator::display();
}