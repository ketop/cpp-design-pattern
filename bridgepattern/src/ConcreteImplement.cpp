
#include "ConcreteImplement.h"
#include "RefineInterface.h"
#include "AbstractImplement.h"
#include <memory>

using ketop::dp::ConcreteImplement;

ConcreteImplement::ConcreteImplement(std::string name):object_(std::move(name))
{

}

ConcreteImplement::~ConcreteImplement()
{
    std::cout  << "["<<  __FILE_NAME__ << ":" << __LINE__ << "]" <<  __func__ << " " <<" called" << std::endl;
}

void ConcreteImplement::implement()
{
    std::cout << "implement " << object_ << std::endl;
}