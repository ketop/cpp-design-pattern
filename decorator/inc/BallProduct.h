
#pragma once

#include "AbstractProduct.h"
#include <iostream>
namespace ketop { namespace dp {

class BallProduct: public AbstractProduct{
    public:
        void display() override
        {
            std::cout << "Ball Product" << std::endl;
        }

};

}}