#include "ConcreteObject.h"
#include "AbstractPrototype.h"
#include <cassert>
#include <cstring>
#include <iostream>
#include <memory>
#include <type_traits>
using ketop::dp::AbstractPrototype;
using ketop::dp::ConcreteObject;



ConcreteObject::ConcreteObject(const char* name, int id):id_(id)
{
    size_t len = strlen(name);
    name_ = new char[len+1];
    assert(name_);
    strcpy(name_, name);
}

ConcreteObject::~ConcreteObject()
{
    delete[] name_;
}


ConcreteObject::ConcreteObject(const ConcreteObject& rhs)
{
    size_t len = strlen(rhs.name_);
    name_ = new char[len+1];
    assert(name_);
    strcpy(name_, rhs.name_);
    id_ = rhs.id_;
}

ConcreteObject& ConcreteObject::operator=(const ConcreteObject& rhs)
{
    if(&rhs != this)
    {
        delete[] name_;
        size_t len = strlen(rhs.name_);
        name_ = new char[len+1];
        assert(name_);
        strcpy(name_, rhs.name_);
        id_ = rhs.id_;
    }
    return *this;
}

void ConcreteObject::display()
{
    std::cout << "address:" << this 
        <<  ",Object properties:\n"
        << "name:" << name_ << "\n"
        << "id:" << id_ << "\n";

}

std::shared_ptr<AbstractPrototype> ConcreteObject::clone()
{
    return std::shared_ptr<AbstractPrototype> ( new ConcreteObject(*this));
}

void ConcreteObject::setId(int id)
{
    id_ = id;
}

void ConcreteObject::setName(const std::string& name)
{
    delete[] name_;
    name_ = new char[name.size()+1];
    assert(name_);
    std::strcpy(name_, name.data());
}