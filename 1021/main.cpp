#include <iostream>

using namespace std;

int main()
{
    string str;
    int data[10];
    fill(data,data+10,0);
    cin>>str;
    for(int i= 0 ;i< str.length() ;i++ )
    {
        data[str[i]-'0']++;
    }

    for(int i = 0 ;i< 10 ;i++ )
    {
        if(data[i]!=0)
        {
            cout<<i<<":"<<data[i]<<endl;
        }
    }

    return 0;
}
