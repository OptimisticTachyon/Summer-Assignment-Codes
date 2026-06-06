// Count number of digits in a given number

#include<iostream>
using namespace std;
int main()
{
    int n,count=0;
    cout << "Enter a number: ";
    cin >>n;
    while (n)
    {
        n=n/10;
        count++;
    }
    cout << "The number of digits in the given number is:"<<count;
    return 0;
}