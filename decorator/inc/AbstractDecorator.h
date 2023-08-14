#pragma once
#include <memory>
#include <string>
#include "AbstractProduct.h"
namespace ketop { namespace dp {

class AbstractDecorator : public AbstractProduct {
public:
    AbstractDecorator(std::shared_ptr<AbstractProduct> spDecoratee):spDecoratee_(spDecoratee){}
    void display() override  { spDecoratee_->display(); }
private:
    std::shared_ptr<AbstractProduct> spDecoratee_;

};

} } 