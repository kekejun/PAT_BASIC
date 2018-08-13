#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;
    for(int i = 0 ;i< n ;i++ )
    {
        string str;
        cin>>str;

        int flag[3],b = 0;
        fill(flag,flag+3 ,0);

        for(int i = 0 ;i< str.length() ;i++ )
        {
            if(str[i] == 'P')
            {
                flag[0]++;
                if( i+2>=str.length() || str[i+1] != 'A')
                {
                    b = 1;
                    break;
                }

            } else if(str[i] == 'A')
            {
                flag[1]++;

            } else if(str[i] == 'T')
            {
                flag[2]++;
                if(i-2 < 0 || str[i-1] != 'A')
                {
                    b = 1;
                    break;
                }
            } else
            {
                b = 1;
                break;
            }
        }
        if(b == 1)
            cout<<"NO"<<endl;
        else
        {
            if(flag[0]!=0 && flag[1]!=0 && flag[2]!=0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }

    return 0;
}
