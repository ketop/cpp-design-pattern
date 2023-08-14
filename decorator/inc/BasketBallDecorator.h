
#pragma once

#include "AbstractDecorator.h"
#include "AbstractProduct.h"
#include <memory>
#include <string>
namespace ketop { namespace dp {

class BasketBallDecorator: public AbstractDecorator
{
    public:
        BasketBallDecorator(std::shared_ptr<AbstractProduct> spProduct);
        ~BasketBallDecorator() override;
        void display() override ;

};

}}