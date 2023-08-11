
#pragma once
#include "AbstractImplement.h"
#include <iostream>
#include <memory>
#include <string>

namespace ketop { namespace dp{

class ConcreteImplement:public AbstractImplement
{
public:
    ConcreteImplement(std::string name);
    ~ConcreteImplement() override;
    void implement() override;
private:
    std::string object_;

};

} }