#include<iostream>
#include<vector>
//#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>V(n);
    for(int i=0;i<V.size();i++)
    {
        cin>>V[i];
    }
    sort(V.begin(),V.end());
    for(int i=0;i<V.size();i++)
    {
        cout<<V[i]<<" ";
    }
    
}
