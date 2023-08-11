#pragma once
#include "AbstractBallProduct.h"
#include <memory>
namespace ketop { namespace dp {

class AbstractBallFactory {
    public:
        virtual std::shared_ptr<AbstractBallProduct> getBall() = 0;
};

}}