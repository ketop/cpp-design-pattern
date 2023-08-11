#pragma once
#include <memory>
namespace ketop { namespace dp {

class AbstractPrototype {
public:
    virtual std::shared_ptr<AbstractPrototype> clone() = 0;
    virtual void display() = 0;
    virtual ~AbstractPrototype() = default;

};

} }