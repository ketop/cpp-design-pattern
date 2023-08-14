#include <cassert>
#include <iostream>
#include <memory>
#include "SubsystemOne.h"
#include "SubsystemTwo.h"
#include "FacadeSystem.h"

using namespace ketop::dp;


int main()
{
    std::shared_ptr<SubsystemOne> spSubOne = std::make_shared<SubsystemOne>();
    std::shared_ptr<SubsystemTwo> spSubTwo = std::make_shared<SubsystemTwo>();

    std::shared_ptr<FacadeSystem> spFacade = std::make_shared<FacadeSystem>(spSubOne, spSubTwo);
    spFacade->init();
    spFacade->execute();
    spFacade->display();


    return 0;
}