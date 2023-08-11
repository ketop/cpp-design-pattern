#include "Car.h"
#include <iostream>
using ketop::dp::Car;

void Car::display()
{
    std::cout << "New Car Info" << '\n'
        << "\tBrand:" << brand_ << '\n'
        << "\tSeats:" << capacity_ << '\n'
        << "\tManualSwith:" << manualswitch_ << '\n'
        << "\tColor:" << color_ << std::endl;
}
void Car::setColor(std::string color)
{
    color = color_;

}
void Car::setBrand(std::string brand)
{
    brand_ = brand;

}
void Car::setCapacity(int seats)
{
    capacity_ = seats;

}
void Car::setManualSwitch(bool isManual)
{
    manualswitch_ = isManual;
}