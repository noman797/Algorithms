#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);   
    cin.tie(0);

    int n,e;
    cin>>n>>e;
    int mat[n][n];
    memset(mat,0,sizeof(mat));
    while(e--)
    {
        int a,b;
        cin>>a>>b;
        mat[a][b]=1;
        mat[b][a]=1; //Directed graph er sathe deina
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    // if(mat[3][4]==1)
    // cout<<"connection ache";
    // else
    // cout<<"connection nai";

    return 0;
}