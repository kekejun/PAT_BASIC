#include <iostream>

using namespace std;

int main()
{
    int a,b,c = 0;
    while(cin>>a>>b)
    {
        if(b != 0)
        {
            if(c == 0)
            {
                cout<<a*(b)<<" "<<b-1;
                c = 1;
            } else
            {
                cout<<" "<<a*(b)<<" "<<b-1;
            }
        }
    }
    if( c == 0 )
        cout<<"0 0";
    cout<<endl;
}
