#include <iostream>

using namespace std;

int main()
{
    string a,b;
    int m,n;
    int ra = 0,rb = 0;

    cin>>a>>m>>b>>n;

    for(int i = 0 ;i< a.length() ;i++ )
    {
        if(a[i]-'0' == m)
            ra = ra*10+ m;
    }
    for(int i = 0 ;i< b.length() ;i++ )
    {
        if(b[i]-'0' == n)
            rb = rb*10+ n;
    }

    cout << ra+rb << endl;
    return 0;
}
