#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <iostream>
#include <SDL2/SDL.h>

namespace WINDOW {
    int width;
    int height;

    bool need_abort;

    SDL_Window* window;
    SDL_Renderer* renderer;

    bool init();

    bool create_window(int w, int h, const char* title);

    void quit();
}

#endif