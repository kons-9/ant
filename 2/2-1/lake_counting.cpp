#include <bits/stdc++.h>
#define MAX_N 10000
#define INF 1e9

using namespace std;

typedef int long long ll;
typedef int long l;
typedef pair<int, int> Pii;
const ll MOD = 1000000007;

int n, m;

char field[1000][1000];

void dfs(int x,int y){
    field[x][y] = '.';

    for (int i = -1; i < 2; i++) {
        for (int j = -1; j < 2; j++) {
            int nx = x + i;
            int ny = y + j;
            if (nx>=0 && nx<n && ny>=0 && ny <m && field[nx][ny] == 'W')
                dfs(nx,ny);
        }
    }
    return;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> field[i][j];
        }
    }
    int ans=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++){
           if(field[i][j]=='W'){
               dfs(i, j);
               ans++;
           }
        }
    }
    cout << ans << endl;
    return 0;
}