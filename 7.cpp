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
    int m=n;
    for(i = 1; i <= n; i++)
    {
            mul=i*m;
            m=m-1;


        sum=sum+mul;


    }
    cout << sum;

    return 0;
}

