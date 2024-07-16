#pragma once
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_joystick.h>
#include <SDL2/SDL_log.h>
#include "Pickup.h"



class Ammo : public Pickup
{
public:
	Ammo(SDL_Renderer* renderer, Vector2D setPos);
	bool addPickupToPlayer(std::unique_ptr<UnitPlayer>& unitPlayer);
};
