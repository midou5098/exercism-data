#include "headers.h"


int main(void){
    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window=SDL_CreateWindow("fuckass library",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,1280,720,SDL_WINDOW_SHOWN);

    bool running=true;
    SDL_Event event;
    while (running){
        while(SDL_PollEvent(&event)){
            if(event.type==SDL_QUIT){
                SDL_Quit();
            }
        }}
}

