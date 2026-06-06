// Reverse a number.

#include<iostream>
using namespace std;
int main()
{
    int num, rvrs = 0;
    cout << "Enter a number :";
    cin >> num;
    while (num)
    {
        rvrs *=10;
        rvrs +=num%10;
        num/=10;
    }
    cout << "The reverse of the number is : " <<rvrs;
    return 0;
}