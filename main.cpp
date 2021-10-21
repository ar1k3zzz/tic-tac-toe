#include "Header Files/Environment.h";
#include <ctime>

int main() {
    srand(time(0));
    Environment game;
    int option;
    game.mainMenu();
    cin >> option;
    game.mainMenu(option);
    return 0;
}
