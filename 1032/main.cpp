#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int data[n+1];
    fill(data,data+n+1,0);

    int max = 0,maxn = 0;
    for(int i = 0 ;i< n ;i++ )
    {
        int a,b;
        cin>>a>>b;
        data[a]+=b;
        if(data[a] > max)
        {
            maxn = a;
            max = data[a];
        }
    }

    cout << maxn<<" "<<max << endl;
    return 0;
}
