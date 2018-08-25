#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
long long data[100000];
long long m,p;
long long nowMax = 0;
int dfs(int begin,int end)
{
    if(end-begin<=nowMax)
        return 0;

    if(data[begin]*p>=data[end])
    {
        if(end-begin > nowMax)
            nowMax = end-begin;
        return end-begin;
    }

    return max(dfs(begin+1,end),dfs(begin,end-1));
}

int main()
{
    cin>>m>>p;
    for(int i = 0 ;i< m ;i++ )
        scanf("%d",&data[i]);

    sort(data,data+m);

    int result = dfs(0,m-1);

    cout<<result+1<<endl;
    return 0;
}
