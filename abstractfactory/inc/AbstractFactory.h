#pragma once
#include "AbstractBallProduct.h"
#include "AbstractSuiteProduct.h"
#include <memory>
namespace ketop { namespace dp {

class AbstractFactory {
    public:
        virtual std::shared_ptr<AbstractBallProduct> getBall() = 0;
        virtual std::shared_ptr<AbstractSuiteProduct> getSuite() = 0;
};

}}