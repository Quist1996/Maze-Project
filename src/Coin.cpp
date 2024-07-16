#include "../headers/Coin.h"
#include "../headers/UnitPlayer.h"

/**
 * @brief Constructor for the Coin class.
 *
 * @param renderer Pointer to the SDL_Renderer.
 * @param setPos Initial position of the Coin pickup.
 */
Coin::Coin(SDL_Renderer* renderer, Vector2D setPos) :
    Pickup(renderer, setPos, "Coin.bmp", "Coin.ogg", true) {
}

/**
 * @brief Adds a coin to the player.
 *
 * @param unitPlayer Unique pointer to the UnitPlayer object.
 * @return true if a coin was successfully added, false otherwise.
 */
bool Coin::addPickupToPlayer(std::unique_ptr<UnitPlayer>& unitPlayer) {
    if (unitPlayer != nullptr) {
        unitPlayer->addCoin();
        return true;
    }
    return false;
}

