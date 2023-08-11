#include "ToyotaBuilder.h"

using ketop::dp::ToyotaBuilder;

void ToyotaBuilder::paintColor(std::string color)
{
    spCar_->setColor(color);
}
void ToyotaBuilder::setLogo()
{
    spCar_->setBrand("TOYOTA");

}
void ToyotaBuilder::addSeats(int seats)
{
    spCar_->setCapacity(seats);

}
void ToyotaBuilder::installClutch(bool isManual)
{
    spCar_->setManualSwitch(isManual);
}
