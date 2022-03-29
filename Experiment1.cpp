/*Guess the number game... Enter a number between 1 to 1000. If the number is correct then end the
game by asking if you want to continue... If the number is incorrect enter either too low or too
high according to the situation until the correct number is guessed...*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
    string str;
    srand(time(0));   // Creating a different random number everytime
    int x = rand()%1000;      // Creating a random number from 1 to 1000
    cout << "A number will be generated randomly between 1 to 1000. You have to guess the number !!" << endl;
    int t;   // Variable to stor eGuess Number
    do   // Outer do-while loop
    {    
        do   // Inner do-while loop
        {
            cout << "Enter your guess number : ";
            cin >> t;
            if(t < x)
                cout << "Too low !! " << endl;  // If guess is low
            if(t > x)
                cout << "Too high !!" << endl;  // If guess is high
        } while (t != x);
        cout << "Do you want to Continue. Enter Yes or No : ";
        cin >> str;
    } while (str == "Yes" || str == "YES" || str == "yes");
    return 0;
}