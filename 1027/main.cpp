#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int m,n;
    char c;

    scanf("%d %c",&m,&c);
    for(n = 0 ;2*n*n-1 <= m ;n++ ){}
    n--;

    for(int i = n ; i> 0 ;i-- )
    {
        for(int j = n ;j> i ;j-- )
        {
            cout<<" ";
        }
        for(int j = 0 ;j<  i*2-1 ;j++ )
        {
            cout<<c;
        }
        cout<<endl;
    }
    for(int i = 1 ; i< n ;i++ )
    {
        for(int j = n-1 ;j> i ;j-- )
        {
            cout<<" ";
        }
        for(int j = 0 ;j<  i*2+1 ;j++ )
        {
            cout<<c;
        }
        cout<<endl;
    }

    cout<<m-2*n*n+1<<endl;
    return 0;
}

