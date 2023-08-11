#include "AbstractSuiteProduct.h"
#include <string>
namespace ketop { namespace dp{ 

class Shirt: public AbstractSuiteProduct
{
    public:
        Shirt(const std::string& brand);
        void display() override;
    private:
        std::string brand_;
};

}}