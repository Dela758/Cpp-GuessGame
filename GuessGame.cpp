#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {

    int num;
    int guess;
    bool isGuessed;

    srand(time(0));
    num = rand() % 100;

    isGuessed = false;
    while(!isGuessed) {
        cout << "Enter a number greater than or equal to 0 and less than 100" << endl;
        cin >> guess;
        cout << endl;

        if(num == guess) {
            cout << "You guessed the correct number!!!!" << endl;
            isGuessed = true;
        } else if(guess < num) {
            cout << "Your guess is less than the number! Try Again" << endl;
        } else {
            cout << "Your guess is higher than the number! Try Again" << endl;
        }
    }

    return 0;
}
