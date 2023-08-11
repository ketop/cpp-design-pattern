#pragma once
#include "Car.h"
#include <memory>
namespace ketop { namespace dp {

class AbstractCarBuilder {
    public:
        AbstractCarBuilder():spCar_(nullptr)
        {
            spCar_ = std::make_shared<Car>();
        }
        virtual ~AbstractCarBuilder() = default;
        virtual void paintColor(std::string color) = 0;
        virtual void setLogo() = 0;
        virtual void addSeats(int seats) = 0;
        virtual void installClutch(bool isManual) = 0;
        std::shared_ptr<Car> getCar() { return spCar_; }
    protected:
        std::shared_ptr<Car> spCar_;

};

}}