#include "NikeFactory.h"
#include "AbstractBallProduct.h"
#include "AbstractSuiteProduct.h"
#include "FootBall.h"
#include "Shirt.h"
#include <memory>

using ketop::dp::BasketballFactory;
using ketop::dp::AbstractBallProduct;
using ketop::dp::AbstractSuiteProduct;
using ketop::dp::Shirt;

std::shared_ptr<AbstractBallProduct> BasketballFactory::getBall()
{
    return std::make_shared<FootBall>("Nike");
}

std::shared_ptr<AbstractSuiteProduct> BasketballFactory::getSuite()
{
    return std::make_shared<Shirt>("Nike");
}