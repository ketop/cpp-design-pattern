#include <iostream>
#include <mutex>
#include <thread>
#include <vector>
#include "Singleton.h"
using ketop::dp::Singleton;
std::mutex g_stdout_mutex;
static const unsigned max_thread_num = 10;

void func()
{
    std::unique_lock<std::mutex> lock(g_stdout_mutex);
    std::cout << std::this_thread::get_id() << ": " << Singleton::instance().echo() << std::endl; 
}

int main()
{
    std::vector<std::thread> threads;
    for(int i = 0; i < max_thread_num; ++i)
    {
        std::thread the_thread(func);
        threads.emplace_back(std::move(the_thread));
    }
    for(auto& th: threads)
    {
        th.join();
    }
    return 0;
}