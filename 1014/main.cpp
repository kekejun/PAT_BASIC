#include <iostream>

using namespace std;

int main()
{
    string str1,str2,str3,str4;
    cin>>str1>>str2>>str3>>str4;

    int flag = 1;
    for(int i = 0; i< str1.length() && i< str2.length() ;i++ )
    {

        if(flag && str1[i]>='A' && str1[i]<='G' && str1[i] == str2[i])
        {
            flag = 0 ;
            switch (str1[i]-'A')
            {
                case 0:cout<<"MON ";break;
				case 1:cout<<"TUE ";break;
				case 2:cout<<"WED ";break;
				case 3:cout<<"THU ";break;
				case 4:cout<<"FRI ";break;
				case 5:cout<<"SAT ";break;
				case 6:cout<<"SUN ";break;
            }
        } else if((!flag) && ((str1[i]>='0' && str1[i]<='9')||(str1[i]>='A' && str1[i]<='N')) && str1[i] == str2[i])
        {
            if(str1[i] >= '0' && str1[i] <= '9')
				cout<<"0"<<str1[i]-'0'<<":";
			else if(str1[i] >= 'A' && str1[i] <= 'N')
				cout<<str1[i]-'A'+10<<":";
            break;
        }
    }

    for(int i = 0; i< str3.length() && i< str4.length() ;i++ )
    {
        if( ((str3[i]>='a' && str3[i]<='z')||(str3[i]>='A' && str3[i]<='N')) && str3[i] == str4[i])
        {
            if(i<10)
                cout<<"0"<<i<<endl;
            else
                cout<<i<<endl;
        }
    }

    return 0;
}
