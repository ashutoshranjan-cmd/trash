// this is the cpp program to find the missing number in the vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size ;
    cout<<"Enter the size of the vector"<<endl;
    cin>>size;
    vector<int> v;
    cout<<"Enter the values in the vector below"<<endl;
    for(int i =0;i<size;i++)
    {
        int value;
        cin>>value;
        v.push_back(value);
    }
    cout<<"The values in the vector are given below"<<endl;
    for(auto i : v)
    {
        cout<<i<<endl;
    }
    int sum = 0;
    sum = accumulate(v.begin(),v.end(),sum);
    cout<<"The sum of the number is "<<sum<<endl;
    int sum2=0;
    int size2 = v.size()+1;
    sum2 = (size2*(size2-1))/2;
    cout<<"The sum of the series is"<<sum2<<endl;


    return 0;
}