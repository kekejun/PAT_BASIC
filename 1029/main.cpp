#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<char> s;
    string str1,str2;
    char data[80];
    cin>>str1>>str2;

    int now1 = 0,now2 = 0;
    int count = 0;

    while( now1 < str1.length() )
    {
        if(str1[now1] != str2[now2] )
        {
            char c = str1[now1]>='a'&&str1[now1]<='z' ? str1[now1]-32 : str1[now1];
            if(s.find(c)==s.end())
            {
                s.insert(c);
                data[count++] = c;
            }
            now1++;
        }else
        {
            now1++;
            now2++;
        }
    }

    for(int i = 0 ;i< count ;i++ )
        cout<<data[i];
    cout<<endl;
    return 0;
}
