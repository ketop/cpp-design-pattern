#pragma once
#include "AbstactInterface.h"
#include "AbstractImplement.h"
#include <iostream>
#include <memory>

namespace ketop { namespace dp{

class RefineInterface: public AbstractInterface
{
public:
    RefineInterface(std::shared_ptr<AbstractImplement> imp);
    ~RefineInterface();
    void operation() override;
private:
    std::shared_ptr<AbstractImplement> spImp_;
};

} }