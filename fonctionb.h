#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED

typedef struct {
    SDL_Surface* image; 
    Mix_Music* son;
}Background;

void initback(Background* b);
void load(Background* b);
void aficherBack(Background b, SDL_Surface* screen);

#endif // FONCTION_H_INCLUDED
