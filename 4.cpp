#include<iostream>
using namespace std;
int main()
{
    int i;
    int j;
    int n;
    int k;
    int sum1;
    int sum=0;
    int mul;
    int x = 1;
    int y;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        for(j =1; j <= i;j++)
        {
            if(j==1)
            {
                sum1=x;
                x=x+1;
            }
            else
            {
                mul=1;
                for(k=1;k<=j;k++)
                {
                  mul=mul*x;
                  x=x+1;
                }
                sum1=sum1+mul;
            }


        }
        sum=sum+sum1;


    }
    cout << sum;

    return 0;
}
