#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

string str[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
int total = 0;

void print(int n)
{
    if(n == 0)
        return;
    print(n/10);
    if(n > 9)
        cout<<" "<<str[n%10];
    else
        cout<<str[n%10];
}

int main()
{

    string data;
    cin>>data;

    for(int i = 0 ;i< data.length() ;i++ )
        total += data[i]-'0';

    print(total);

    cout<<endl;
    return 0;
}
