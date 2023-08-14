
#pragma once
#include "Component.h"
#include <vector>
#include <iostream>
#include <memory>
#include <string>

namespace ketop { namespace dp{

class Composite:public Component
{
public:
    Composite()=default;
    ~Composite() 
    {
        std::cout << "(" << __FILE_NAME__ << ":" << __LINE__ << ")" << __func__ << std::endl;
    }
    void addComponent(std::shared_ptr<Component> comp) override
    {
        children_.push_back(comp);
    }
    void removeComponent(std::shared_ptr<Component> comp) override
    {
        children_.pop_back();
    }

    std::string operation() override
    {
        std::string ret;
        for(auto comp : children_)
        {
            ret.append(comp->operation());
            if(comp != children_.back())
            {
                ret.append(",");
            }
        }
        return ret;
    }
    bool isComposite() override
    {
        return true;
    }
private:
    std::vector<std::shared_ptr<Component>> children_;
};

} }