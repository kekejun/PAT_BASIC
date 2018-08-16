#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n,a,b,c,d,e;
    double dd = 0;
    a = b = c = d = e = 0;
    cin>>n;

    bool bb = true;
    for(int i= 0 ;i< n ;i++ )
    {
        int temp;
        cin>>temp;

        if(temp%10 == 0)
            a += temp;
        else if(temp%5 == 1)
        {
            if(bb == true)
            {
                bb = false;
                b += temp;
            } else
            {
                bb = true;
                b -= temp;
            }
        } else if(temp%5 == 2)
        {
            c++;
        } else if(temp%5 == 3)
        {
            d++;
            dd += temp;
        } else if(temp %5 ==4)
        {
            if(temp > e)
                e = temp;
        }
    }

    if(a)
        cout<<a<<" ";
    else
        cout<<"N"<<" ";
    if(b)
        cout<<b<<" ";
    else
        cout<<"N"<<" ";
    if(c)
        cout<<c<<" ";
    else
        cout<<"N"<<" ";
    if(d)
        printf("%.1f ",dd/d);
    else
        cout<<'N'<<" ";
    if(e)
        cout<<e<<endl;
    else
        cout<<"N"<<endl;
    return 0;
}
