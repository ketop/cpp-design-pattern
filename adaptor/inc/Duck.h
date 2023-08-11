#pragma once
#include <memory>
namespace ketop { namespace dp {

class Duck {
public:
    virtual ~Duck() = default;
    virtual void duckYeah() = 0;

};

} }