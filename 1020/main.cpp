#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

struct Node
{
    double cun;
    double price;
    double perPrice;
};

int cmp(Node a,Node b)
{
    return a.perPrice > b.perPrice;
}

int main()
{
    int m,n;
    cin>>m>>n;
    Node node[m];

    for(int i = 0 ;i< m ;i++ )
        cin>>node[i].cun;
    for(int i = 0 ;i< m ;i++ )
    {
        cin>>node[i].price;
        node[i].perPrice = node[i].price/node[i].cun;
    }

    sort(node,node+m,cmp);

    double total = 0;
    for(int i = 0 ;i< m && n!= 0 ;i++ )
    {
        if(n>=node[i].cun)
        {
            total += node[i].price;
            n -= node[i].cun;
        } else
        {
            total += n * node[i].perPrice;
            break;
        }
    }
    printf("%0.2f\n",total);

    return 0;
}
