// Calculate sum of first N natural numbers.

#include <iostream>
using namespace std;
int main()
{
    int N,sum=0;
    cout << "Enter a number:";
    cin >> N;
    for (int i=1;i<=N;i++)
    {
        sum+=i;
    }
    cout << "The sum of first "<<N<< " natural numbers is : "<< sum;
    return 0;
}