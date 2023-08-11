#include <cassert>
#include <iostream>
#include <memory>
#include "AbstractBallProduct.h"
#include "AbstractBallFactory.h"
#include "BasketballFactory.h"
#include "FootballFactory.h"

using namespace ketop::dp;


int main()
{
    std::shared_ptr<AbstractBallFactory> ff = std::make_shared<FootballFactory>();
    std::shared_ptr<AbstractBallProduct> fp = ff->getBall();
    fp->display();

    std::shared_ptr<AbstractBallFactory> bf = std::make_shared<BasketballFactory>();
    std::shared_ptr<AbstractBallProduct> bp = bf->getBall();
    bp->display();
    

    return 0;
}