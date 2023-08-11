
#pragma once

#include "AbstractBallProduct.h"
#include <string>
namespace ketop { namespace dp {

class BasketBall: public AbstractBallProduct
{
    public:
        BasketBall(const std::string& brand);
        ~BasketBall() override;
        void display() override ;
    private:
        static unsigned long long g_id;
        std::string serial_;
        std::string brand_;

};

}}