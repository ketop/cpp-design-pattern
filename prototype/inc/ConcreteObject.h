#pragma once
#include "AbstractPrototype.h"

namespace ketop { namespace dp{

class ConcreteObject: public AbstractPrototype
{
public:
    ConcreteObject(const char* name, int id);
    ConcreteObject(const ConcreteObject&);
    ConcreteObject& operator=(const ConcreteObject&);
    ~ConcreteObject() override;
    std::shared_ptr<AbstractPrototype> clone() override;
    void display() override;
    void setId(int id);
    void setName(const std::string& name);

    
private:
    char* name_;
    int id_;
};

} }