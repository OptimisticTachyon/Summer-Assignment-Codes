// Check whether a given number is plaindrome or not.

#include<iostream>
using namespace std;
int main()
{
    int n,temp,rvrs=0;
    cout<<"Enter a number:";
    cin>>n;
    temp=n;
    while(temp>0)
    {
        rvrs*=10;
        rvrs+=temp%10;
        temp/=10;
    }
    if (n==rvrs)
    {
        cout<<"The number is a plaindrome.";
    }
    else
    {
        cout<<"The number is not a plaindrome.";
    }
    return 0;
}