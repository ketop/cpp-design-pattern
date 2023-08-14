
#pragma once
#include <iostream>
#include <memory>

namespace ketop { namespace dp{

class Component
{
public:
    Component()=default;
    virtual ~Component() =default ;
    virtual bool isComposite(){ return false; }
    virtual std::string operation() = 0;
    virtual void addComponent(std::shared_ptr<Component>) {}
    virtual void removeComponent(std::shared_ptr<Component>) {}
};

} }