#pragma once
#include <memory>
#include <string>
#include "AbstractProduct.h"
namespace ketop { namespace dp {

class SimpleFactory {
    public:
        std::shared_ptr<AbstractProduct> createProduct(const std::string& name);
        static SimpleFactory& instance();
        SimpleFactory(const SimpleFactory& ) = delete;
        SimpleFactory& operator=(const SimpleFactory&) = delete;
    private:
        SimpleFactory() = default;
        ~SimpleFactory() = default;
};

} } 