
#include "RefineInterface.h"
#include "AbstractImplement.h"
#include <memory>

using ketop::dp::RefineInterface;

RefineInterface::RefineInterface(std::shared_ptr<AbstractImplement> imp):spImp_(imp)
{

}

RefineInterface::~RefineInterface()
{
    std::cout  << "["<<  __FILE_NAME__ << ":" << __LINE__ << "]" <<  __func__ << " " <<" called" << std::endl;
}

void RefineInterface::operation()
{
    spImp_->implement();
}