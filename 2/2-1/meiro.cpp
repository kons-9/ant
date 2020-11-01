#include <bits/stdc++.h>
#define MAX_N 10000
#define INF 1e9

using namespace std;

typedef int long long ll;
typedef int long l;
typedef pair<int, int> Pii;
const ll MOD = 1000000007;

int n, m;
char field[100][100];
int d[100][100];
int sx,sy;
int gx, gy;

int solve() {
    queue<Pii> que;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            d[i][j] = INF;
        }
    }
    que.push(Pii(sx, sy));
    d[sx][sy] = 0;

    while(que.size()){
        Pii point = que.front();
        que.pop();
        if(point.first==gx && point.second==gy)
            break;
        for (int i = 0; i < 4; i++){
            int dx[4] = {0, 0, 1, -1};
            int dy[4] = {1, -1, 0, 0};
            int nx = point.first + dx[i];
            int ny = point.second + dy[i];
            if(0<=nx && nx<n && 0<=ny && ny<m && field[nx][ny] !='#' && d[nx][ny] ==INF ){
                //field[nx][ny] == '.'とするとGが入らなくなる．
                que.push(Pii(nx, ny));
                d[nx][ny] = d[point.first][point.second] + 1;
            }
        }
    }
    return d[gx][gy];
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        for (int j= 0; j < m; j++){
            char tmp;
            cin >> tmp;
            field[i][j]=tmp;
            if(tmp=='S'){
                sx = i;sy=j;
            }else if(tmp=='G'){
                gx = i;gy = j;
            }
        }
    }
    cout<<solve()<<endl;
    return 0;
}