#include <iostream>
#include <algorithm>
using namespace std;

struct Node
{
    string name;
    string id;
    int grade;
};

int main()
{
    int n;
    cin>>n;
    Node node[n];

    int max = -1,maxNum,min = 101,minNum;

    for(int i = 0 ;i< n ;i++ )
    {
        cin>>node[i].name>>node[i].id>>node[i].grade;

        if(max < node[i].grade)
        {
            max = node[i].grade;
            maxNum = i;
        }
        if(min > node[i].grade)
        {
            min = node[i].grade;
            minNum = i;
        }

    }

    cout<<node[maxNum].name<<" "<<node[maxNum].id<<endl;
    cout<<node[minNum].name<<" "<<node[minNum].id<<endl;

    return 0;
}
