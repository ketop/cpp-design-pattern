#pragma once
#include "AbstractCarBuilder.h"
namespace ketop { namespace dp {

class ToyotaBuilder: public AbstractCarBuilder {
public:
    ~ToyotaBuilder() override { std::cout << "ToyotaBuilder destory" << std::endl; }
    void paintColor(std::string color) override;
    void setLogo() override;
    void addSeats(int seats) override;
    void installClutch(bool isManual) override;

};

} }