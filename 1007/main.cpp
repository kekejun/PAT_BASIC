#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int data[n+1];
    fill(data,data+n+1,1);

    for(int i = 2 ;i<=n ;i++ )
    {
        if(data[i])
        {
            for(int j = 2;i*j <=n ;j++ )
                data[i*j] = 0;
        }
    }

    int pre = 1,now = 1,count = 0;
    for(int i = 2; i<= n ;i++ )
    {
        if(data[i])
        {
            pre = now;
            now = i;
            if(now - pre == 2)
                count++;
        }
    }
    cout<<count<<endl;
}
