#pragma once

namespace ketop { namespace dp {

class AbstractSuiteProduct{
    public:
        virtual ~AbstractSuiteProduct() = default;
        virtual void display() = 0;

};

}}