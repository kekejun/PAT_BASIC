#include <iostream>
#include <set>
using namespace std;

int main()
{
    bool flag[128];
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);

    fill(flag,flag+128,true);
    for(int i = 0 ;i< str1.length() ;i++ )
    {
        flag[str1[i]] = false;
        if(str1[i]>='A' || str1[i]<='Z')
            flag[str1[i]+32] = false;
    }

    if(!flag[43])
    {
        for(char c = 'A'; c<='Z' ;c++)
            flag[c] = false;
    }

    for(int i = 0 ;i< str2.length() ;i++ )
    {
        if(flag[str2[i]])
        {
            cout<<str2[i];
        }
    }

    cout <<  endl;
    return 0;
}
