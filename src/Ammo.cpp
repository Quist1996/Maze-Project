#include "../headers/Ammo.h"
#include "../headers/UnitPlayer.h"



Ammo::Ammo(SDL_Renderer* renderer, Vector2D setPos) :
	Pickup(renderer, setPos, "Battery.bmp", "Ammo.ogg", true) {

}



bool Ammo::addPickupToPlayer(std::unique_ptr<UnitPlayer>& unitPlayer) {
	if (unitPlayer != nullptr && unitPlayer->isAmmoFull() == false) {
		unitPlayer->addAmmo(10);
		return true;
	}

	return false;
}
