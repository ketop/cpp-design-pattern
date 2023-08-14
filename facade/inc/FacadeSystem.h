#pragma once

#include "SubsystemOne.h"
#include "SubsystemTwo.h"
#include <memory>
#include <string>
namespace ketop { namespace dp {

class FacadeSystem 
{
    public:
        FacadeSystem(std::shared_ptr<SubsystemOne> spSubOne, std::shared_ptr<SubsystemTwo> spSubTwo)
        :spSubOne_(spSubOne), spSubTwo_(spSubTwo)
        {}
        void init()
        {
            spSubOne_->init();
            spSubTwo_->prepare();
        }
        void execute()
        {
            spSubTwo_->work();
            spSubOne_->execute();
        }
        void display()
        {
            spSubOne_->display();
            spSubTwo_->show();
        }

    private:
        std::shared_ptr<SubsystemOne> spSubOne_;
        std::shared_ptr<SubsystemTwo> spSubTwo_;

};

}}