#pragma once

#include "AbstractDecorator.h"
#include "AbstractProduct.h"
#include <memory>
#include <string>
namespace ketop { namespace dp {

class FootBallDecorator: public AbstractDecorator
{
    public:
        FootBallDecorator(std::shared_ptr<AbstractProduct> spProduct);
        ~FootBallDecorator() override;
        void display() override;

};

}}