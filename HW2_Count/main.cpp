#include <iostream>
#include <iomanip>
using namespace std;

// James Mathson
// CSCI 250
// Assignment 2 - Counting
// August 25, 2017

int count(int A[], int length, int target)
{
    if(length == 0)
        return 0;
    else if(A[length-1]!=target)
        return count(A, length-1, target);
    else
        return 1 + count(A, length-1, target);
}

int main()
{
    int A[] = {2,6,2,4,1};
    cout << "Number of times your chosen target appears = " << count(A, 5, 2) << endl;
    return 0;
}
