#include <iostream>
using namespace std;

int main()
{
    // declare variables to store input
    string name;
    string year;
    string movie;
    
    // ask user for input
    cout << " What is your name? :"; // outputs the questions
    cin >> name; // gets the input from the user
    
    cout << " What year are you? :";
    cin >> year;
    
    cout << " What's your favorite scary movie? :";
    cin >> movie;
    
    // outputs all results
    cout << " Hi my name is " << name << " I am a " << year << " and my favorite scary movie is " << movie << endl;
    return 0;
}
