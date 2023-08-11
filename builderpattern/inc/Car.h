#pragma once
#include <iostream>
#include <string>
namespace ketop { namespace dp {

class Car {
    public:
        ~Car(){std::cout << "Car destroy" << std::endl;}
        void setColor(std::string color);
        void setBrand(std::string color);
        void setCapacity(int sates);
        void setManualSwitch(bool isManual);
        void display();
    private:
        std::string color_;
        std::string brand_;
        int capacity_;
        bool manualswitch_;
};

}}