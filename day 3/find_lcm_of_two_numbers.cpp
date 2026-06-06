// Find LCM of two numbers.

#include<iostream>
using namespace std;
int main()
{
    int num1, num2, temp, max;
    cout << "Enter first number :";
    cin >> num1;
    cout << "Enter second number :";
    cin >> num2;
    (num1 > num2) ?max = num1 : max = num2;
    while (true)
    {
        if (max%num1==0 && max%num2==0)
        {
            cout << "The LCM of the numbers is :" <<max;
            break;
        }
        max++;
    }
    return 0;
}