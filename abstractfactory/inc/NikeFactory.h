#pragma once
#include "AbstractBallProduct.h"
#include "AbstractFactory.h"
#include "AbstractSuiteProduct.h"
#include <memory>
namespace ketop { namespace dp{ 
class BasketballFactory: public AbstractFactory {
public:
    std::shared_ptr<AbstractBallProduct> getBall() override;
    std::shared_ptr<AbstractSuiteProduct> getSuite() override;
};

} }