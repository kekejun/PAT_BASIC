#include <iostream>

using namespace std;

int main()
{
    string str;
    cin>>str;
    char c;
    int zhishu = 0;

    int index = str.find('E');
    c = str[index+1];

    if(str[0] == '-')
        cout<<'-';

    for(int i = index+2 ;i<str.length() ;i++ )
    {
        zhishu = zhishu*10 + (str[i]-'0');
    }
    if(c == '+')
    {
        zhishu++;
        int begin = str.find('.')+1;
        int now = zhishu;
        for(int i = 1 ; str[i] != 'E' ;i++ )
        {
            if(i+1 == begin + zhishu)
                cout<<'.';
            if(str[i] != '.')
            {
                cout<<str[i];
                now--;
            }
        }
        for(int i = 0 ;i < now ;i++ )
        {
            cout<<0;
        }
    } else
    {
        cout<<"0.";
        for(int i = 0 ;i < zhishu-1 ;i++ )
        {
            cout<<0;
        }
        for(int i = 1 ; str[i] != 'E' ;i++ )
        {
            if(str[i] == '.')
                continue;
            cout<<str[i];
        }
    }

    cout << endl;
    return 0;
}
