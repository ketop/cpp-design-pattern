
#include "HondaBuilder.h"

using ketop::dp::HondaBuilder;
void HondaBuilder::paintColor(std::string color)
{
    spCar_->setColor(color);
}
void HondaBuilder::setLogo()
{
    spCar_->setBrand("HONDA");

}
void HondaBuilder::addSeats(int seats)
{
    spCar_->setCapacity(seats);

}
void HondaBuilder::installClutch(bool isManual)
{
    spCar_->setManualSwitch(isManual);
}