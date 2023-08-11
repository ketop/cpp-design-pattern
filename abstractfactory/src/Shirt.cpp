#include "Shirt.h"
#include <iostream>

using ketop::dp::Shirt;

Shirt::Shirt(const std::string& brand): brand_(brand)
{

}

void Shirt::display()
{
    std::cout << "Shirt Logo is " << brand_ << std::endl;
}