#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    long long int  m,n;
    cin>>m>>n;

    int result = 1.0*(n-m)/100 +0.5;

    printf("%02d:%02d:%02d\n",(int)result/3600,(int)result%3600/60,(int)result%60);

    return 0;
}
