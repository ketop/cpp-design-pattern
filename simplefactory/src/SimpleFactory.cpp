#include "SimpleFactory.h"
#include <cstdio>
#include <memory>
#include <string>
#include "FootBall.h"
#include "BasketBall.h"
using namespace ketop::dp;


SimpleFactory& SimpleFactory::instance()
{
    static SimpleFactory sf;
    return sf;
}

std::shared_ptr<AbstractProduct> SimpleFactory::createProduct(const std::string& name)
{
    if(name == "FootBall")
    {
        return std::make_shared<FootBall>();
    }
    if(name == "BasketBall")
    {
        return std::make_shared<BasketBall>();
    }        
    return nullptr;
}