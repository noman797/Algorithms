#include <bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        /* code */
        int par = q.front();
        q.pop();
        cout << par << endl;

        // for(int i=0;i<v[par].size();i++)
        // {
        //     int child=v[par][i];
        //     cout<<child<<endl;
        // }

        for (int child : v[par])
        {
            if (!vis[child])
            {
                q.push(child);
                vis[child] = true;
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, e;
    cin >> n >> e;

    while (e--)
    {
        /* code */
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int src;
    cin >> src;
    memset(vis, false, sizeof(vis));
    bfs(src);

    return 0;
}