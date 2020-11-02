#include <bits/stdc++.h>
#define MAX_N 10000
#define INF 1e9

using namespace std;

typedef int long long ll;
typedef int long l;
typedef pair<int, int> Pii;
const ll MOD = 1000000007;

int n;
int s[100000];
int t[100000];
Pii task[100000];

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> s[i];
        cin >> t[i];
        task[i] = Pii(t[i],s[i]);
    }
    sort(task,task+n);
    int ans = 0;int end = 0;
    for (int i = 0; i < n; i++){
        if(end < task[i].second){
            ans++;
            end = task[i].first;
        }
        
    }
    cout << ans << endl;
    
    
    return 0;
}