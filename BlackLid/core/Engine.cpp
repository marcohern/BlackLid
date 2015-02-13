//
//  Engine.cpp
//  BlackLid
//
//  Created by Marco Hernandez on 8/02/15.
//  Copyright (c) 2015 Marco Hernandez. All rights reserved.
//

#include "Engine.h"
#include "../cameras/ScrollCamera.h"

using namespace cameras;

namespace core {
    Engine::Engine() {
        this->window = NULL;
        this->renderer = NULL;
        this->screen = NULL;
        running = false;
        ticks = 0;
        
        this->create = new Create(this);
        this->draw = new core::Draw(this);
        this->camera = new ScrollCamera(this);
    }
    
    Engine::~Engine() {
        this->window = NULL;
        this->renderer = NULL;
        this->screen = NULL;
        this->running = false;
        ticks = 0;
        
        this->create = NULL;
        this->draw = NULL;
    }
    
    void Engine::Setup() {
        int init = SDL_Init(SDL_INIT_EVERYTHING);
        if (init!=0) {
            throw GameException("SDL_Init failed");
        } else {
            printf("SDL_Init success\n");
        }
        
        this->window = SDL_CreateWindow("BlackLid", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 640, 480, SDL_WINDOW_SHOWN);
        if (this->window==NULL) {
            throw GameException("SDL_CreateWindow failed!");
        } else {
            printf("SDL_CreateWindow success\n");
        }
        
        this->renderer = SDL_CreateRenderer(this->window, -1, SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);
        if (this->renderer==NULL) {
            throw GameException("SDL_CreateRenderer failed!");
        } else {
            printf("SDL_CreateRenderer success\n");
        }
    }
    
    void Engine::Run() {
        Uint32 dt;
        this->running=true;
        
        ticks = SDL_GetTicks();
        while(running) {
            while(SDL_PollEvent(&e)!=0) {
                if (e.type == SDL_QUIT) {
                    running = false;
                } else if (e.type == SDL_KEYUP || e.type == SDL_KEYDOWN) {
                    player1.Update(&e.key);
                }
            }
            
            dt = SDL_GetTicks() - this->ticks;
            
            if (dt>0) {
                fps.Update(dt);
                this->Update(dt);
                camera->Update(dt);
                
                SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_NONE);
                SDL_SetRenderDrawColor( renderer, 0, 0, 0, 255 );
                SDL_SetRenderTarget( renderer, NULL);
                SDL_RenderClear( renderer );
                SDL_RenderFillRect(renderer, NULL);
                SDL_SetRenderDrawBlendMode(renderer, SDL_BLENDMODE_BLEND);
                
                fps.Draw();
                this->Draw(dt);
                this->ticks = SDL_GetTicks();
            }
            
            SDL_RenderPresent(renderer);
        }
    }
    
    void Engine::Quit() {
        this->running=false;
        SDL_DestroyRenderer(this->renderer);
        SDL_DestroyWindow(this->window);
        SDL_Quit();
    }
    
    SDL_Renderer *Engine::GetRenderer() {
        return this->renderer;
    }
    
    InputCommand *Engine::GetInputCommandPlayer1() {
        return &this->player1;
    }
    
    Camera *Engine::GetCamera() {
        return this->camera;
    }
}