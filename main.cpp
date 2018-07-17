#include <iostream>
#include <iomanip>
#include <string>
using namespace std;


// James Mathson
// CSCI 250
// Assignment 1 - Asterisks Recursion
// August 23, 2017

void asterisks(int n)
{
    if(n != 0)
    {
        cout << "*";
        asterisks(n-1);
    }
}

int main()
{
    asterisks(1);
    cout << endl;
    asterisks(4);
    cout << endl;
    asterisks(0);
    cout << endl;
    asterisks(6);
    cout << endl;
    asterisks(12);
    cout << endl;
    return 0;
}
