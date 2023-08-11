#include <cassert>
#include <iostream>
#include <memory>
#include "AbstractBallProduct.h"
#include "AbstractFactory.h"
#include "AdidasFactory.h"
#include "NikeFactory.h"

using namespace ketop::dp;


int main()
{
    std::shared_ptr<AbstractFactory> nikefact =  std::make_shared<BasketballFactory>();
    nikefact->getBall()->display();
    nikefact->getSuite()->display();
    std::shared_ptr<AbstractFactory> adsfact =  std::make_shared<FootballFactory>();
    adsfact->getBall()->display();
    adsfact->getSuite()->display();

    return 0;
}