#pragma once
#include "AbstractBallProduct.h"
#include "AbstractBallFactory.h"
#include <memory>
namespace ketop { namespace dp{ 
class FootballFactory: public AbstractBallFactory {
public:
    std::shared_ptr<AbstractBallProduct> getBall() override;
};

} }