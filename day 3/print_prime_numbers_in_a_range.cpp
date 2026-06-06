// Print prime numbers in a range.

#include <iostream>
using namespace std;
int main()
{
    int lowerlimit, upperlimit, flag;
    cout << "Enter the lower limit of the range :";
    cin >> lowerlimit;
    cout << "Enter the upper limit of the range :";
    cin >> upperlimit;
    for (int i=lowerlimit;i<=upperlimit;i++)
    {
        if (i>=2)
        {
            flag = 1;
            for (int j=2;j<i;j++)
            {
                if (i%j == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                cout<<i<<" ";
            }
        }
    }
    return 0;
}