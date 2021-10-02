#include <iostream>
#include <thread>

using namespace std::chrono_literals;

static bool is_finished = false;

void count_sheep()
{
    int sheep_count = 1;

    while (!is_finished)
    {
        std::cout << sheep_count << " sheep" << std::endl;
        std::this_thread::sleep_for(1s);
        sheep_count++;
    }

    std::cout << "Done counting sheep!" << std:: endl;
}

void count_pigeons()
{
    int pigeon_count = 1;

    while (!is_finished)
    {
        std::cout << pigeon_count << " pigeon" << std::endl;
        std::this_thread::sleep_for(1s);
        pigeon_count++;
    }

    std::cout << "Done counting pigeons!" << std:: endl;
}

int main() {
    std::thread sheep_worker(count_sheep);
    std::thread pigeon_worker(count_pigeons);

    std::cout << "Press [ENTER] key to stop the counting." << std::endl;
    std::cin.get();
    is_finished = true;

    sheep_worker.join();
    pigeon_worker.join();

    std::cout << "Press [ENTER] key to exit." << std::endl;
    std::cin.get();
}
