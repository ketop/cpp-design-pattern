#include "Director.h"
#include "AbstractCarBuilder.h"
#include "HondaBuilder.h"
#include "ToyotaBuilder.h"
#include "Car.h"
#include <memory>
using namespace ketop::dp;


int main()
{
    std::shared_ptr<Director> director = std::make_shared<Director>();
    std::shared_ptr<AbstractCarBuilder> builder = std::make_shared<ToyotaBuilder>();
    director->setBuilder(builder);
    std::shared_ptr<Car> spCar =  director->construct();
    spCar->display();
    builder = std::make_shared<HondaBuilder>();
    director->setBuilder(builder);
    spCar =  director->construct();
    spCar->display();

    

    return 0;
}