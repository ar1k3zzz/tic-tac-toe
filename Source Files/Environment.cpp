#include "../Header Files/Environment.h"

Environment::Environment() {
    playerOne.setPlayerSide('X');
    playerTwo.setPlayerSide('O');
}

//Functions

void Environment::showBoard() {
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 3; j++){
            if(i % 2 == 0){
                cout << setfill(' ') << setw(2);
                cout << board[i/2][j];
                cout << setfill(' ') << setw(2);
            } else {
                if(i != 5){
                    cout << setfill('_') << setw(4);
                } else {
                    cout << setfill(' ') << setw(4);
                }
            }
            if(j != 2){
                cout << '|';
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
}

void Environment::mainMenu() {

}

void Environment::mainMenu(char input) {

}

bool Environment::getInputPlayerX(string player) {
    cout << "Place Mark 'X' " << player << ": ";
    cin >> input;
    switch(input){
        case '1' : {
            if(board[2][0] == '*'){
                board[2][0] = 'X';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '2' : {
            if(board[2][1] == '*'){
                board[2][1] = 'X';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '3' : {
            if(board[2][2] == '*'){
                board[2][2] = 'X';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '4' : {
            if(board[1][0] == '*'){
                board[1][0] = 'X';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '5' : {
            if(board[1][1] == '*'){
                board[1][1] = 'X';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '6' : {
            if(board[1][2] == '*'){
                board[1][2] = 'X';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '7' : {
            if(board[0][0] == '*'){
                board[0][0] = 'X';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '8' : {
            if(board[0][1] == '*'){
                board[0][1] = 'X';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '9' : {
            if(board[0][2] == '*'){
                board[0][2] = 'X';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        default: {
            cout << "Number range is 1-9" << endl;
            return false;
        }
    }
}

bool Environment::getInputPlayerO(string player) {
    cout << "Place Mark 'O' " << player << ": ";
    cin >> input;
    switch(input){
        case '1' : {
            if(board[2][0] == '*'){
                board[2][0] = 'O';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '2' : {
            if(board[2][1] == '*'){
                board[2][1] = 'O';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '3' : {
            if(board[2][2] == '*'){
                board[2][2] = 'O';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '4' : {
            if(board[1][0] == '*'){
                board[1][0] = 'O';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '5' : {
            if(board[1][1] == '*'){
                board[1][1] = 'O';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '6' : {
            if(board[1][2] == '*'){
                board[1][2] = 'O';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '7' : {
            if(board[0][0] == '*'){
                board[0][0] = 'O';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '8' : {
            if(board[0][1] == '*'){
                board[0][1] = 'O';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        case '9' : {
            if(board[0][2] == '*'){
                board[0][2] = 'O';
                return true;
            } else {
                cout << "This field has been filled";
                return false;
            }
        }
        default: cout << "Number range is 1-9" << endl;
    }
}

bool Environment::getInputRandomActorBot(char side) {
    int row = rand()%3;
    int col = rand()%3;
    if(board[row][col] == '*'){
        board[row][col] = side;
    } else {
        return getInputRandomActorBot(side);
    }
    return true;
}

bool Environment::getInputStateMachineBot(char side, int turn) {
    string botMovesX[5] = {
            "0 0, 0 2, 2 0, 2 2, ",
            "0 0, 0 2, 2 0, 2 2, ",
            "0 0, 0 2, 2 0, 2 2, ",
            "1 1, 0 1, 1 0, 1 2, 2 1, 0 0, 0 2, 2 0, 2 2, ",
            "0 1, 1 0, 1 2, 2 1, 0 0, 0 2, 2 0, 2 2, "
                        };
    string botMovesO[5] = {
            "1 1, 0 1, 1 0, 1 2, 2 1, ",
            "1 1, 0 1, 1 0, 1 2, 2 1, ",
            "1 1, 0 1, 1 0, 1 2, 2 1, 0 0, 0 2, 2 0, 2 2, ",
            "0 0, 0 2, 2 0, 2 2, 0 1, 1 0, 1 2, 2 1, "
    };
    string move;
    if(side == 'X'){
        move = botMovesX[turn];
    } else {
        move = botMovesO[turn];
    }
    size_t pos = 0;
    string token;
    while((pos = move.find(", ")) != string::npos){
        token = move.substr(0,pos);
        int row = int(token[0]) - 48;
        int col = int(token[2]) - 48;
        if(board[row][col] == '*'){
            board[row][col] = side;
            break;
        }
        move.erase(0, pos + 2);
    }
    return true;
}

bool Environment::checkPlayerX(){
    if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') return true;
    if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') return true;
    if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') return true;
    if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') return true;
    if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') return true;
    if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') return true;
    if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') return true;
    if(board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') return true;
    return false;
}

bool Environment::checkPlayerO(){
    if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') return true;
    if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') return true;
    if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') return true;
    if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') return true;
    if(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') return true;
    if(board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') return true;
    if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') return true;
    if(board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') return true;
    return false;
}

void Environment::playGame(char side) {
    playerOne.setPlayerSide(side);
    if(side == 'X'){
        playerTwo.setPlayerSide('O');
    } else {
        playerTwo.setPlayerSide('X');
    }
    cout << setfill('=') << setw(12)
         << "Start Game"
         << setfill('=') << setw(3)
         << ' ' << endl;
    showBoard();
    if(playerOne.getPlayerSide() == 'X') {
        for (int i = 0; i < 5; i++){
            while (!getInputPlayerX("P1")) {
                getInputPlayerX("P1");
            }
            showBoard();
            if(checkPlayerX() == 1){
                cout << "Player 1 win!" << endl;
                break;
            }
            if(i == 4){
                cout << setfill('=') << setw(4)
                     << "Draw!"
                     << setfill('=') << setw(4);
                break;
            }
            while (!getInputPlayerO("P2")){
                getInputPlayerO("P2");
            }
            showBoard();
            if(checkPlayerO() == 1) {
                cout << "Player 2 win!" << endl;
                break;
            }
        }
    } else {
        for (int i = 0; i < 5; i++){
            while (!getInputPlayerX("P2")) {
                getInputPlayerX("P2");
            }
            showBoard();
            if(checkPlayerX() == 1){
                cout << "Player 2 win!" << endl;
                break;
            }
            if(i == 4){
                cout << setfill('=') << setw(4)
                     << "Draw!"
                     << setfill('=') << setw(4);
                break;
            }
            while (!getInputPlayerO("P1")){
                getInputPlayerO("P1");
            }
            showBoard();
            if(checkPlayerO() == 1) {
                cout << "Player 1 win!" << endl;
                break;
            }
        }
    }
}

void Environment::playVSRandomActorBot(char side){
    playerOne.setPlayerSide(side);
    if(side == 'X'){
        playerTwo.setPlayerSide('O');
    } else {
        playerTwo.setPlayerSide('X');
    }
    playerTwo.setIsBot(true);
    cout << setfill('=') << setw(12)
         << "Start Game"
         << setfill('=') << setw(3)
         << ' ' << endl;
    showBoard();
    if(playerOne.getPlayerSide() == 'X') {
        for (int i = 0; i < 5; i++){
            while (!getInputPlayerX("Player")) {
                getInputPlayerX("Player");
            }
            showBoard();
            if(checkPlayerX() == 1){
                cout << "Player win!" << endl;
                break;
            }
            if(i == 4){
                cout << setfill('=') << setw(4)
                     << "Draw!"
                     << setfill('=') << setw(4);
                break;
            }
            cout << setfill('=') << setw(13) << ' ' << endl;
            getInputRandomActorBot('O');
            showBoard();
            if(checkPlayerO() == 1) {
                cout << "RandomActorBot win!" << endl;
                break;
            }
        }
    } else {
        for (int i = 0; i < 5; i++){
            getInputRandomActorBot('X');
            showBoard();
            if(checkPlayerX() == 1){
                cout << "RandomActorBot win!" << endl;
                break;
            }
            cout << setfill('=') << setw(13) << ' ' << endl;
            if(i == 4){
                cout << setfill('=') << setw(4)
                     << "Draw!"
                     << setfill('=') << setw(4);
                break;
            }
            while (!getInputPlayerO("Player")){
                getInputPlayerO("Player");
            }
            showBoard();
            if(checkPlayerO() == 1) {
                cout << "Player win!" << endl;
                break;
            }
        }
    }
}

void Environment::playVSStateMachine(char side){
    playerOne.setPlayerSide(side);
    if(side == 'X'){
        playerTwo.setPlayerSide('O');
    } else {
        playerTwo.setPlayerSide('X');
    }
    playerTwo.setIsBot(true);
    cout << setfill('=') << setw(12)
         << "Start Game"
         << setfill('=') << setw(3)
         << ' ' << endl;
    showBoard();
    if(playerOne.getPlayerSide() == 'X') {
        for (int i = 0; i < 5; i++){
            while (!getInputPlayerX("Player")) {
                getInputPlayerX("Player");
            }
            showBoard();
            if(checkPlayerX() == 1){
                cout << "Player win!" << endl;
                break;
            }
            if(i == 4){
                cout << setfill('=') << setw(4)
                     << "Draw!"
                     << setfill('=') << setw(4);
                break;
            }
            cout << setfill('=') << setw(13) << ' ' << endl;
            getInputStateMachineBot('O', i);
            showBoard();
            if(checkPlayerO() == 1) {
                cout << "StateMachineBot win!" << endl;
                break;
            }
        }
    } else {
        for (int i = 0; i < 5; i++){
            getInputStateMachineBot('X', i);
            showBoard();
            if(checkPlayerX() == 1){
                cout << "StateMachineBot win!" << endl;
                break;
            }
            cout << setfill('=') << setw(13) << ' ' << endl;
            if(i == 4){
                cout << setfill('=') << setw(4)
                     << "Draw!"
                     << setfill('=') << setw(4);
                break;
            }
            while (!getInputPlayerO("Player")){
                getInputPlayerO("Player");
            }
            showBoard();
            if(checkPlayerO() == 1) {
                cout << "Player win!" << endl;
                break;
            }
        }
    }
}

const Player &Environment::getPlayerOne() const {
    return playerOne;
}

void Environment::setPlayerOne(const Player &playerOne) {
    Environment::playerOne = playerOne;
}

const Player &Environment::getPlayerTwo() const {
    return playerTwo;
}

void Environment::setPlayerTwo(const Player &playerTwo) {
    Environment::playerTwo = playerTwo;
}
