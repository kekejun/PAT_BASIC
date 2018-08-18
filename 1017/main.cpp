#include <iostream>

using namespace std;

int main()
{
    string str;
    int n;
    char result[1000];
    cin>>str>>n;

    int now = (str[0]-'0');
    if(now/n != 0 || str.length() == 1)
        cout<<now/n;
    int pre = now%n,flag = 0;
    for(int i = 1; i< str.length() ;i++ )
    {
        now = pre*10 + (str[i]-'0');
        pre = now%n;
        cout<<now/n;
    }

    cout << " "<<pre << endl;
    return 0;
}
