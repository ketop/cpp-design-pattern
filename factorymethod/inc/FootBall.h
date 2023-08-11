#pragma once

#include "AbstractBallProduct.h"
#include <string>
namespace ketop { namespace dp {

class FootBall: public AbstractBallProduct
{
    public:
        FootBall(const std::string& brand);
        ~FootBall() override;
        void display() override;
    private:
        static unsigned long long g_id;
        std::string serial_;
        std::string brand_;

};

}}