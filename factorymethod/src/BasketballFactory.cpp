#include "BasketballFactory.h"
#include "AbstractBallProduct.h"
#include "FootBall.h"
#include <memory>

using ketop::dp::BasketballFactory;
using ketop::dp::AbstractBallProduct;

std::shared_ptr<AbstractBallProduct> BasketballFactory::getBall()
{
    return std::make_shared<FootBall>("Nike");
}
