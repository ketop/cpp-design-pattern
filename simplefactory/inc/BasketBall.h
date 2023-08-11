
#pragma once

#include "AbstractProduct.h"
#include <string>
namespace ketop { namespace dp {

class BasketBall: public AbstractProduct
{
    public:
        BasketBall();
        ~BasketBall() override;
        void display() override ;
    private:
        static unsigned long long g_id;
        std::string serial_;

};

}}