#include <iostream>
#include <thread>
#include <vector>

void work()
{
    while (true)
    {
        //Bucle infinito
    }
}
int main()
{
    int num_threads = std::thread::hardware_concurrency();   
    std::vector<std::thread> threads;  // Declare the vector threads to use it later
    for (int i = 0; i < num_threads; ++i)
    {
        threads.emplace_back(work);
    }
    for (auto &thread : threads)
    {
        thread.join();
    }
    system("pause");
    return 0;
}
