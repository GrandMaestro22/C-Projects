#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

enum class Difficulty {
    EASY,
    MEDIUM,
    HARD
};

Difficulty getDifficultyFromUser() {
    int choice;
    std::cout << "Select Difficulty:\n";
    std::cout << "1. Easy\n2. Medium\n3. Hard\n";
    std::cout << "Enter choice (1-3): ";
    std::cin >> choice;

    switch (choice) {
        case 1: return Difficulty::EASY;
        break;
        case 2: return Difficulty::MEDIUM;
        break;
        case 3: return Difficulty::HARD;
        break;
        default:
            cout << "Invalid choice!";
            return Difficulty::EASY;
    }
}

int main(){
    srand(time(0));

    int guess;
    int attempts = 0;
    int attemptsLimit = 5;
    
    cout << "Try to guess the random number!"<<endl;
    cout << "Select Mode (1.Easy/2.Medium/3.Hard)"<<endl;
    cout << "Enter 1,2 or 3 for the difficulty"<<endl;
    Difficulty difficulty = getDifficultyFromUser();
    cout << "Okay! Now, try to guess! " << endl;
    cin >> guess;
    attempts++;

    int randomNumber;
    if(difficulty == Difficulty::EASY){
        randomNumber = rand() % 10 + 1;
    }else if(difficulty == Difficulty::MEDIUM){
        randomNumber = rand() % 50 + 1;
    }else{
        randomNumber = rand() % 100 + 1;
    }

    

    while(randomNumber != guess){
        if (attempts >= attemptsLimit) {
            cout << "You ran out of attempts! The number was " << randomNumber << endl;
            return 0;
        }
        cout << "Wrong! Try to guess the random number again: ";
        cout << "Attempts left: " << attemptsLimit - attempts << endl;
        cin >> guess;
        attempts++;
    }
    cout << "You Win!" << endl;
    return 0;
}
