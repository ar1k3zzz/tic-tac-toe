#ifndef ASSIGNMENT5_ENVIRONMENT_H
#define ASSIGNMENT5_ENVIRONMENT_H

#include "Player.h"
#include <iomanip>
#include <iostream>
#include <fstream>
#include <cstring>

class Environment {
private:
    char board[3][3] = {
            {'*','*','*'},
            {'*','*','*'},
            {'*','*','*'},
                        };
    char input;
    Player playerOne;
    Player playerTwo;

public:
    
    //Constructor
    Environment();
    
    //Functions
    void mainMenu();
    void mainMenu(char input);
    void showBoard();

    bool getInputPlayerX(string player);
    bool getInputPlayerO(string player);
    bool getInputRandomActorBot(char side);
    bool getInputStateMachineBot(char side, int turn);

    bool checkPlayerX();
    bool checkPlayerO();

    void playGame(char side);
    void playVSRandomActorBot(char side);
    void playVSStateMachine(char side);

    //Getters & Setters

    const Player &getPlayerOne() const;
    void setPlayerOne(const Player &playerOne);

    const Player &getPlayerTwo() const;
    void setPlayerTwo(const Player &playerTwo);
};


#endif //ASSIGNMENT5_ENVIRONMENT_H
