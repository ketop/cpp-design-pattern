#pragma once
#include <string>
namespace ketop { namespace dp {

class Singleton {
    public:
        static Singleton& instance();
        std::string echo();
        Singleton(const Singleton&) = delete;
        Singleton& operator=(const Singleton&) = delete;
    private:
        Singleton() = default;
        ~Singleton() = default;
};

} } 