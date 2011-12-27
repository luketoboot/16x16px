#ifndef PLAYER
#define PLAYER

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include <string>

#include "foreground.hpp"

class Player
{
  private:
    SDL_Surface* display;
    SDL_Surface* sprite;
    Foreground* foreground;
    int px, py;
  public:
    Player(SDL_Surface* display, Foreground* foreground);
    ~Player();
    bool loadSprite(std::string filename);
    void draw(int x, int y);
    void input(Uint8 direction);
};

#endif
