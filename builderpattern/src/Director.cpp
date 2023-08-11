#include "Director.h"
#include "AbstractCarBuilder.h"
#include <memory>

using ketop::dp::Director;
using ketop::dp::Car;

void Director::setBuilder(std::shared_ptr<AbstractCarBuilder> spBuilder)
{
    spBuilder_ = spBuilder;
}
std::shared_ptr<Car> Director::construct()
{
    spBuilder_->setLogo();
    spBuilder_->paintColor("white");
    spBuilder_->addSeats(5);
    spBuilder_->installClutch(true);
    return spBuilder_->getCar();
}