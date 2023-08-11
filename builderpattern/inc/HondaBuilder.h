#pragma once
#include "AbstractCarBuilder.h"
namespace ketop { namespace dp {

class HondaBuilder: public AbstractCarBuilder {
public:
    ~HondaBuilder() override  { std::cout << "HondaBuidler destroy" << std::endl;}
    void paintColor(std::string color) override;
    void setLogo() override;
    void addSeats(int seats) override;
    void installClutch(bool isManual) override;

};

} }