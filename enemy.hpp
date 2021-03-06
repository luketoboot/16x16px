#ifndef ENEMY
#define ENEMY

#include <iostream>
#include <string>
#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

#include "foreground.hpp"
#include "box.hpp"

class Enemy
{
  private:
    SDL_Surface* display;
    SDL_Surface* sprite;
    Foreground* foreground;
    int px, py;
    int vx, vy;
    int width, height;
    int animation_time;
    int death_animation;
  public:
    Enemy(SDL_Surface* display, Foreground* foreground);
    ~Enemy();
    bool loadSprite(std::string filename, int width, int height);
    void setMapPosition(int x, int y);
    int update();
    void draw(int x, int y);
    void hit();
    Box getBbox();
};

#endif
