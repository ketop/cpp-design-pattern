#include <cassert>
#include <future>
#include <iostream>
#include <memory>
#include "Component.h"
#include "Composite.h"
#include "LeafComponent.h"

using namespace ketop::dp;


int main()
{
    std::shared_ptr<Component> ptree = std::make_shared<Composite>();
    std::shared_ptr<Component> node1 = std::make_shared<LeafComponent>();
    std::shared_ptr<Component> node2 = std::make_shared<LeafComponent>();
    ptree->addComponent(node1);
    ptree->addComponent(node2);
    std::shared_ptr<Component> ptree2 = std::make_shared<Composite>();
    std::shared_ptr<Component> node3 = std::make_shared<LeafComponent>();
    ptree2->addComponent(node3);
    ptree->addComponent(ptree2);
    std::string ret = ptree->operation();
    std::cout << ret << std::endl;
    return 0;

}