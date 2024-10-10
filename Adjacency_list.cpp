#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);
    int n,e;
    cin>>n>>e;
    vector<int>mat[n];
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        mat[a].push_back(b);
        mat[b].push_back(a); //Directed graph er sathe deina
    }

    for(int i=0;i<mat[0].size();i++)
    {
        cout<<mat[0][i]<<" ";
    }
    
    // for(int x:mat[0])
    // {
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    

    return 0;
}