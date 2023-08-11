#include "FootBall.h"
#include <iostream>
using ketop::dp::FootBall;

unsigned long long FootBall::g_id = 0;
FootBall::FootBall()
{
    g_id++;
    serial_ = std::to_string(g_id);
}
FootBall::~FootBall()
{
    std::cout << "destory FootBall Serial No."  << serial_  << std::endl;
}
void FootBall::display()
{
    std::cout << "FootBall Product, Serial No.:" << serial_  << std::endl;
}