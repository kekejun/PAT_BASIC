#include <iostream>
#include <algorithm>
#include <stdio.h>
using namespace std;

int main()
{
    int n,max,min;
    cin>>n;

    while(n != 6174 && n!= 0)
    {
        int a[4];
        a[0] = n/1000;
        a[1] = n%1000/100;
        a[2] = n%100/10;
        a[3] = n%10;

        sort(a,a+4);
        min = a[0]*1000+a[1]*100+a[2]*10+a[3];
        max = a[3]*1000+a[2]*100+a[1]*10+a[0];
        n = max-min;
        printf("%04d - %04d = %04d\n",max,min,n);
    }

    return 0;
}
