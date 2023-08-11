#pragma once

#include "AbstractProduct.h"
#include <string>
namespace ketop { namespace dp {

class FootBall: public AbstractProduct
{
    public:
        FootBall();
        ~FootBall() override;
        void display() override;
    private:
        static unsigned long long g_id;
        std::string serial_;

};

}}