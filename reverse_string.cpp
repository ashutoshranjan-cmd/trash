// this is the cpp program for the string reverse
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string>v;
    for(int i=0;i<5;i++)
    {
        string temp;
        getline(cin,temp);
        v.push_back(temp);
    }
    int size = v.size();
    for(int i =0;i<size/2;i++)
    {
        string temp ;
        temp = v[i];
        v[i]=v[size-1-i];
        v[size-1-i]=temp;
    }
    for(auto i:v)
    {
        cout<<i<<endl;
    }
    return 0;
}