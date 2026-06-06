// Find product of digits of a number.

#include<iostream>
using namespace std;
int main()
{
    int num, product = 1;
    cout << "Enter a number:";
    cin >> num;
    while (num)
    {
        product *= num%10;
        num/=10;
    }
    cout << "The product of the digits of the given number is:" << product;
    return 0;
}