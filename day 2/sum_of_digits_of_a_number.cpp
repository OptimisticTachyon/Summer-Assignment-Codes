// Find sum of digits of a number.

#include<iostream>
using namespace std;
int main()
{
    int num, sum=0;
    cout << "Enter a number :";
    cin >> num;
    while (num)
    {
        sum +=num%10;
        num/=10;
    }
    cout << "The sum of the digits of the given number is "<< sum;
    return 0;
}