#include <iostream>
#include <ctime>
using namespace std;

void play_game(int guess) {


    //variable to store random number from 0 - 2
    int random = rand() % 3;

    //array to store "Rock, Paper and Scissor"
    string elements[3] = {"Rock", "Paper", "Scissor"};

    //variable to store computer choosen word
    string computer_guess = elements[random];

    //variables to store user guess
    string user_guess = elements[guess - 1]; //added -1 because user will enter 1, 2, 3 and our index starts from 0, 1, 2

    //implementing game logic
    if(guess > 0 && guess < 4) {
        if(computer_guess == "Rock" && user_guess == "Paper") {
            cout << endl << "You Win!" << endl << endl << "Computer Chose " << computer_guess << " and you chose " << user_guess << endl << endl;;
        } else if(computer_guess == "Paper" && user_guess == "Rock") {
            cout << endl << "You Lose!" << endl << endl << "Computer Chose " << computer_guess << " and you chose " << user_guess << endl << endl;;
        } else {
            if(computer_guess == "Rock" && user_guess == "Scissor") {
                cout << endl << "You Lose!" << endl << endl << "Computer Chose " << computer_guess << " and you chose " << user_guess << endl << endl;
            } else if(computer_guess == "Scissor" && user_guess == "Rock") {
                cout << endl << "You Win!" << endl << endl << "Computer Chose " << computer_guess << " and you chose " << user_guess << endl << endl;
            } else {
                if(computer_guess == "Paper" && user_guess == "Scissor") {
                    cout << endl << "You Win!" << endl << endl << "Computer Chose " << computer_guess << " and you chose " << user_guess << endl << endl;
                } else if(computer_guess == "Scissor" && user_guess == "Paper") {
                    cout << endl << "You Lose!" << endl << endl << "Computer Chose " << computer_guess << " and you chose " << user_guess << endl << endl;
                } else if(computer_guess == user_guess) {
                    cout << endl << "It's a draw" << endl << endl << "Computer Chose " << computer_guess << " and you chose " << user_guess << endl << endl;
                }
            }
        }
    } else {
        cout << "Enter a valid number" << endl;
    }
    
    
}

int main() {
    //seed to generate different random number every time the program runs
    srand(time(NULL));
    
    cout << "Welcome to our Rock, Paper and Scissor game." << endl;
    cout << "You have three options :" << endl;
    cout << "1. Rock" << "2. Paper" << "3. Scissor" << endl;
    
    //variable to store input
    int u_g;
    cout << "Enter a number : ";
    cin >> u_g;

    play_game(u_g);

    return 0;
}