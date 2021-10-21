#include "../Header Files/Player.h"


char Player::getPlayerSide() const {
    return playerSide;
}

void Player::setPlayerSide(char playerSide) {
    Player::playerSide = playerSide;
}

bool Player::isBot1() const {
    return isBot;
}

void Player::setIsBot(bool isBot) {
    Player::isBot = isBot;
}
