// Check whether a number is prime or not.

#include<iostream>
using namespace std;
int main()
{
    int num, flag =1;
    cout << "Enter a number :";
    cin >> num;
    if(num<2)
    {
        cout << "The number is not prime.";
    }
    else
    {
        for(int i=2;i<num;i++)
        {
            if (num%i==0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            cout<<num<< "The given number is a prime number.";
        }
        else
        {
            cout<<num<< "The given number is a composite number.";
        }
    }
    return 0;
}