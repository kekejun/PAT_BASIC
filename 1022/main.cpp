#include <iostream>

using namespace std;

long long int a,b,c;

void get(long long int n,long long int e)
{
    if(n == 0)
        return;
    int temp = n%e;
    get(n-temp,e*c);
    cout<<temp*c/e;
}

int main()
{
    cin>>a>>b>>c;
    if(a+b == 0)
        cout<<0<<endl;
    else
        get(a+b,c);

    return 0;
}
