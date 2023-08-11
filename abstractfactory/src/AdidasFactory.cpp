#include "AdidasFactory.h"
#include "AbstractBallProduct.h"
#include "AbstractSuiteProduct.h"
#include "BasketBall.h"
#include "Shirt.h"
#include <memory>

using ketop::dp::FootballFactory;
using ketop::dp::AbstractBallProduct;
using ketop::dp::AbstractSuiteProduct;
using ketop::dp::Shirt;

std::shared_ptr<AbstractBallProduct> FootballFactory::getBall()
{
    return std::make_shared<BasketBall>("Adidas");
}

std::shared_ptr<AbstractSuiteProduct> FootballFactory::getSuite()
{
    return std::make_shared<Shirt>("Adidas");
}


