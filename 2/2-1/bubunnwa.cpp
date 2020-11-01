#include <bits/stdc++.h>
#define MAX_N 10000
#define INF 1e9

using namespace std;

typedef int long long ll;
typedef int long l;
typedef pair<int, int> Pii;
const ll MOD = 1000000007;

bool dfs(int i, int sum,int n, int k, vector<int>a){
    if(i==n){
        return sum == k;
    }
    return dfs(i + 1, sum, n, k, a) || dfs(i + 1, sum + a[i], n, k, a);
}
int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k;
    cin >> k;
    if(dfs(0,0,n,k,a))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    
    return 0;

}