#pragma once
#include "AbstractCarBuilder.h"
#include "Car.h"
#include <memory>
namespace ketop { namespace dp {

class Director {
public:
    void setBuilder(std::shared_ptr<AbstractCarBuilder> spBuilder);
    std::shared_ptr<Car> construct();
    
private:
    std::shared_ptr<AbstractCarBuilder> spBuilder_;
};




} }