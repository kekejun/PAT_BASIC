#include <iostream>

using namespace std;

int main()
{
    int data[10],min = 10;
    fill(data,data+10,0);

    for(int i = 0 ;i< 10 ;i++ )
    {
        cin>>data[i];
        if(min > i && data[i] != 0 && i!=0)
            min = i;
    }
    cout<<min;
    data[min]--;

    for(int i = 0 ;i< 10 ;i++ )
    {
        for(int j = 0 ;j< data[i] ; j++ )
            cout<<i;
    }

    return 0;
}
