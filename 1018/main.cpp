#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int data;
    cin>>data;
    int a1,a2,a3,b1,b2,b3,m = 0,n = 0,z = 0;
    a1 = a2 = a3= b1 = b2 = b3 = 0;
    getchar();

    for(int i = 0 ;i< data ;i++ )
    {
        char a,b;
        scanf("%c %c",&a,&b);
        getchar();
        if((a=='C'&&b=='J') || (a=='B' && b=='C') || (a=='J' && b == 'B'))
        {
            m++;
            if(a=='C') a1++;
            else if(a=='B') a2++;
            else if(a=='J') a3++;
        } else if( a== b)
        {
            n++;
        } else
        {
            z++;
            if(b=='C') b1++;
            else if(b=='B') b2++;
            else if(b=='J') b3++;
        }
    }

    cout<<m<<" "<<n<<" "<<z<<endl;
    cout<<z<<" "<<n<<" "<<m<<endl;
    cout<<((a2>=a1 ? (a2>=a3?'B':'J'):(a1>=a3?'C':'J')))<<" "<<((b2>=b1 ? (b2>=b3?'B':'J'):(b1>=b3?'C':'J')))<<endl;
    return 0;
}
