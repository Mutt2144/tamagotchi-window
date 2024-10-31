#include "window.hpp"

bool WINDOW::init() {
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        std::cerr << "Couldn't initialize SDL: " << SDL_GetError() << "\n";
        need_abort = 1;
        return 0;
    }

    return 1;
}

bool WINDOW::create_window(int w, int h, const char* title) {
    std::cout << "Creating window...\n";
    window = SDL_CreateWindow(title, SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, w, h, SDL_WINDOW_SHOWN | SDL_WINDOW_OPENGL);
    if (!window) {
        std::cerr << "Couldn't create the window: " << SDL_GetError() << "\n";
        need_abort = 1;
        return 0;
    }

    std::cout << "Window Created on address: " << window << "\n\n";


    std::cout << "Creating renderer...\n";
    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
    if (!renderer) {
        std::cerr << "Couldn't create the renderer: " << SDL_GetError() << "\n";
        need_abort = 1;
        return 0;
    }

    std::cout << "Renderer created on address: " << renderer << "\n\n";

    return 1;
}

void WINDOW::quit() {
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
}