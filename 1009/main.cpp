#include <iostream>

using namespace std;

int main()
{
    string str;
    getline(cin,str);

    int end = str.length();
    for(int i = str.length()-1 ;i>= 0; i--)
    {
        if(str[i] == ' ')
        {
            for(int j = i+1 ;j< end; j++)
                cout<<str[j];
            cout<<str[i];
            end = i;
        }
        if(i == 0)
        {
            for(int j = i ;j< end; j++)
                cout<<str[j];
        }

    }
    cout<<endl;

    return 0;
}
