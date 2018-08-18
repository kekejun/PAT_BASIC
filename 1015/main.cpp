#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

struct Node
{
    int id;
    int d_score;
    int c_score;
    Node(int a,int b,int c)
    {
        id = a;
        d_score = b;
        c_score = c;
    }
};

int cmp(Node a,Node b)
{
    if(a.d_score+a.c_score == b.d_score+b.c_score)
    {
        if(a.d_score == b.d_score)
            return a.id < b.id;
        return a.d_score > b.d_score;
    }
    return a.d_score+a.c_score > b.d_score+b.c_score;
}


void print(Node s)
{
	printf("%08d %d %d\n",s.id,s.d_score,s.c_score);
}

int main()
{
    int n,low,high;
    cin>>n>>low>>high;
    vector<Node> first;
    vector<Node> second;
    vector<Node> third;
    vector<Node> four;

    int count = 0;
    for(int i = 0 ;i< n ;i++ )
    {
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(b >= high && c >= high)
        {
            first.push_back(Node(a,b,c));
        } else if(b>=high && c <high && c >= low)
        {
            second.push_back(Node(a,b,c));
        } else if(b >= c && c>=low)
        {
            third.push_back(Node(a,b,c));
        } else if(b < low || c < low)
        {

        } else
        {
            four.push_back(Node(a,b,c));
        }

    }
    sort(first.begin(),first.end() ,cmp);
    sort(second.begin(),second.end() ,cmp);
    sort(third.begin(),third.end() ,cmp);
    sort(four.begin(),four.end() ,cmp);

    cout<<first.size()+second.size()+third.size()+four.size()<<endl;

    for_each(first.begin(),first.end(),print);
    for_each(second.begin(),second.end(),print);
    for_each(third.begin(),third.end(),print);
    for_each(four.begin(),four.end(),print);
}
