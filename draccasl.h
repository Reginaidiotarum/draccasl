#ifndef __draccasl_h__
#define __draccasl_h__

#include "SDL.h"
#include "SDL_image.h"
#include "SDL_ttf.h"
#include "SDL_mixer.h"
#include "iostream"
#include "string"
#include "vector"
#include "constants.h"
class Map;

extern DEBUG_T DEBUG;

//globals go in header file? Is this also awful?
SDL_Window *gWindow;
SDL_Renderer *gRenderer;
SDL_Surface *gSurface; //global surface used for stuff.
SDL_Surface *jackSprite; //surface reserved for player's sprite
SDL_Texture *gTexture;
SDL_Texture *tileTexture;
SDL_Surface *tileSet;
Mix_Music *gMusic;
SDL_Rect gCamera; //the camera. p. sure this kinda needs to be global.
int currentMap;
int nextMap;


int WINDOW_W = 640;
int WINDOW_H = 480;
//gameState_t gameState; //Proooooobably can't define that in a header.

//crap, will each individual enemy/projectile/whatever need their own surface? Hmm.
//maybe make a vector to hold all of the non-terrain objects?
//Or a list? Gaah, I dunno.

//Right. GameObjects vector. Which means I need a GameObject class.


//Prototype functions!

void init();

void exit();

bool event(SDL_Event e);

void render();

void loop();

void changeMap(Map oldMap, Map newMap);

void gameStart();

void loadMap(Map currentMap);

#endif
//There. Now draccasl files just need to #include draccasl.h. Right?