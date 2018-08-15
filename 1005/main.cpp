#include <iostream>

using namespace std;

int data[101];

int main()
{
    int n;
    cin>>n;
    for(int i= 0 ;i< n ;i++)
    {
        int temp;
        cin>>temp;
        data[temp] = 1;
    }

    for(int i = 100; i>= 0 ;i-- )
    {
        if(data[i] == 1)
        {
            int now = i;
            while(now > 1)
            {
                if(now % 2 == 1)
                    now = (now*3+1)/2;
                else
                    now /= 2;
                if(now < 100)
                    data[now] = 0;
            }
        }
    }

    bool b = true;
    for(int i = 100 ;i>= 0 ;i-- )
    {
        if(b && data[i] )
        {
            cout<<i;
            b = false;
        } else if(data[i])
            cout<<" "<<i;
    }
    cout<<endl;

    return 0;
}
