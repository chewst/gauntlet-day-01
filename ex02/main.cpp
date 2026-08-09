// main.cpp: spawn past the cap, then read the count back
#include <iostream>
#include "EnemySpawner.hpp"

int main(){
    EnemySpawner spawner(2);
    std::cout << "spawned " << spawner.spawn() << '\n';   // 1
    std::cout << "spawned " << spawner.spawn() << '\n';   // 2
    std::cout << "spawned " << spawner.spawn() << '\n';   // 2 (capped)
    std::cout << "total   " << spawner.spawnedCount() << '\n';
}