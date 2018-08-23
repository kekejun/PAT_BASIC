#include <iostream>
#include <stdio.h>
using namespace std;

int nowy = 2014,nowm = 9,nowd = 6;

bool isLegal(int y,int m,int d)
{
    if(y<nowy && y>nowy-200)
        return true;
    else if(y == nowy && (m<nowm || (m==nowm && d<=nowd)))
        return true;
    else if(y == nowy-200 && (m>nowm || (m == nowm && d>=nowd)))
        return true;

    return false;
}

int main()
{
    int n;
    cin>>n;

    int miny,minm,mind,maxy,maxm,maxd;
    string minstr,maxstr;

    miny = minm = mind = 2015;
    maxy = maxm = maxd = 0;

    int count = 0;

    for(int i = 0 ;i< n ;i++ )
    {
        string str;
        int y,m,d;
        cin>>str;
        scanf("%d/%d/%d",&y,&m,&d);

        if(isLegal(y,m,d))
        {
            count++;

            if(y<miny || (y == miny && m<minm) || (y == miny && m == minm && d<mind))
            {
                miny = y;
                minm = m;
                mind = d;
                minstr = str;
            }
            if(y > maxy || (y == maxy && m>maxm) || (y == maxy && m == maxm && d>maxd))
            {
                maxy = y;
                maxm = m;
                maxd = d;
                maxstr = str;
            }
        }
    }
    if(count != 0)
        cout << count<<" "<<minstr<<" "<<maxstr<< endl;
    else
        cout<<0<<endl;
    return 0;
}
