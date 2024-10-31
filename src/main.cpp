#define WIDTH 800
#define HEIGHT 600

#include <iostream>

#include "include/window.hpp"

#include "includes.cpp"

bool start() {
    WINDOW::init();

    WINDOW::create_window(WIDTH, HEIGHT, "Tamagotchi");

    SDL_Delay(2000);
}

int main() {
    std::system("clear");
    start();
    


    
    WINDOW::quit();
    return 0;
}