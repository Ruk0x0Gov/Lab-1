#include <iostream>
using namespace std;

int main()
{
    double credits;
    double gpa;
    int holds;
    int courseReq;
    
    cout << " Granduation Elgbility Checker " << endl;
    cout << endl;
    
    cout << " How many credits do you have: ";
    cin >> credits;
    
    cout << " What is your GPA: ";
    cin >> gpa;
    
    cout << " Enter number of holds: ";
    cin >> holds;
    
    cout << " Enter number unfinished course requirements: ";
    cin >> courseReq;
    
    cout << endl;
    
    
    // else if program
    if ( credits > 60 && gpa > 2.0 && holds == 0 && courseReq == 0 )
    {
    cout << " You are Eligible to Graduate! " << endl;
    }
    else
    {
    cout << " You are NOT Eligible to Graduate. " << endl;
    cout << endl;

    }
    
        
    
    return 0;
}
