#include "FootBall.h"
#include <iostream>
using ketop::dp::FootBall;

unsigned long long FootBall::g_id = 0;
FootBall::FootBall(const std::string& brand): brand_(brand)
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
    std::cout << brand_ << " FootBall Product, Serial No.:" << serial_  << std::endl;
}