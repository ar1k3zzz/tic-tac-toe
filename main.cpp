#include "Header Files/Environment.h";
#include <ctime>

int main() {
    srand(time(0));
    Environment game;
    game.playVSStateMachine('X');
    return 0;
}
