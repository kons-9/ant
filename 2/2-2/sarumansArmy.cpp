#include <bits/stdc++.h>
#define MAX_N 10000
#define INF 1e9

using namespace std;

typedef int long long ll;
typedef int long l;
typedef pair<int, int> Pii;
const ll MOD = 1000000007;


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    int r;
    cin >>n;
    int x[n];

    
    cin >>r;
    for (int i = 0; i < n; i++){
        cin >> x[i];
    }
    sort(x,x+n);
    int now = x[0];
    int nowi=0;
    int ans=0;
    while(nowi<n){
        while(nowi<n && x[nowi]-now<=r){
            nowi++;
        }
        if(nowi==n){
            ans++;
            break;
        }
        now = x[nowi-1];
        ans++;

        while(nowi<n && x[nowi]-now<=r){
            nowi++;
        }
        if(nowi==n){
            break;
        }
        now = x[nowi];
    }
    cout << ans << endl;

    return 0;
}