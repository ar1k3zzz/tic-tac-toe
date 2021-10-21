#ifndef ASSIGNMENT5_PLAYER_H
#define ASSIGNMENT5_PLAYER_H

using namespace std;

class Player {
private:
    char playerSide;
    bool isBot = false;
public:

    //Constructor

    //Functions

    //Getters & Setters
    char getPlayerSide() const;
    void setPlayerSide(char playerSide);

    bool isBot1() const;
    void setIsBot(bool isBot);
};


#endif //ASSIGNMENT5_PLAYER_H
