#include "../headers/Ammo.h"
#include "../headers/UnitPlayer.h"

/**
 * @brief Constructor for the Ammo class.
 *
 * @param renderer Pointer to the SDL_Renderer.
 * @param setPos Initial position of the Ammo pickup.
 */
Ammo::Ammo(SDL_Renderer* renderer, Vector2D setPos) :
    Pickup(renderer, setPos, "Battery.bmp", "Ammo.ogg", true) {
}

/**
 * @brief Adds ammo to the player if their ammo is not full.
 *
 * @param unitPlayer Unique pointer to the UnitPlayer object.
 * @return true if ammo was successfully added, false otherwise.
 */
bool Ammo::addPickupToPlayer(std::unique_ptr<UnitPlayer>& unitPlayer) {
    if (unitPlayer != nullptr && !unitPlayer->isAmmoFull()) {
        unitPlayer->addAmmo(10);
        return true;
    }
    return false;
}

