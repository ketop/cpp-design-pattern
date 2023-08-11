#include "FootballFactory.h"
#include "AbstractBallProduct.h"
#include "BasketBall.h"
#include <memory>

using ketop::dp::FootballFactory;
using ketop::dp::AbstractBallProduct;

std::shared_ptr<AbstractBallProduct> FootballFactory::getBall()
{
    return std::make_shared<BasketBall>("Nike");
}



