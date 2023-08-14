#include "FootBallDecorator.h"
#include "AbstractDecorator.h"
#include "AbstractProduct.h"
#include <iostream>
#include <memory>
using ketop::dp::FootBallDecorator;

FootBallDecorator::FootBallDecorator(std::shared_ptr<AbstractProduct> spProduct):AbstractDecorator(spProduct)
{
}
FootBallDecorator::~FootBallDecorator()
{
}
void FootBallDecorator::display()
{
    std::cout << "FootBall" << std::endl;
    AbstractDecorator::display();
}