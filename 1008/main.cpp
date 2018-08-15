#include <iostream>

using namespace std;

int n,m,data[100];

void reserve(int begin,int end)
{
    for( ;begin<end ; begin++,end--)
    {
        swap(data[begin],data[end]);
    }
}

int main()
{
    cin>>n>>m;

    m %= n;

    for(int i= 0 ;i< n ;i++ )
        cin>>data[i];

    reserve(0,n-m-1);
    reserve(n-m,n-1);
    reserve(0,n-1);

    cout<<data[0];
    for(int i = 1 ;i< n ; i++)
        cout<<" "<<data[i];
    cout<<endl;
    return 0;
}
