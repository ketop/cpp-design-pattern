#pragma once

namespace ketop { namespace dp {

class AbstractProduct{
    public:
        virtual ~AbstractProduct() = default;
        virtual void display() = 0;

};

}}