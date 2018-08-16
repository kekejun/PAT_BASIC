#include <iostream>

using namespace std;
const int maxn = 1000000;
int data[maxn];
int main()
{
    int m,n;
    cin>>m>>n;

    int count = 0;
    int flag = 0;
    for(int i = 2; i< maxn ;i++ )
    {
        //cout<<count<<endl;
        if(data[i] == 0)
        {
            count++;
            for(int j = 2;i*j < maxn ;j++ )
            {
                data[i*j] = 1;
            }

            if(count >= m)
            {
                if(flag == 0)
                    cout<<i;
                else
                    cout<<" "<<i;

                flag++;

                if(flag == 10)
                {
                    flag = 0;
                    cout<<endl;
                }
            }
            if(count == n)
                break;
        }
    }
    if(flag != 0)
        cout  << endl;
    return 0;
}
