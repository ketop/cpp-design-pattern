#include "BasketBall.h"
#include <iostream>
using ketop::dp::BasketBall;

unsigned long long BasketBall::g_id = 0;
BasketBall::BasketBall()
{
    g_id++;
    serial_ = std::to_string(g_id);
}
BasketBall::~BasketBall()
{
    std::cout << "destory BasketBall Serial No."  << serial_  << std::endl;
}
void BasketBall::display()
{
    std::cout << "BasketBall Product, Serial No." << serial_ << std::endl;
}