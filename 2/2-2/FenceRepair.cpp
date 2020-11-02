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
    cin >> n;
    priority_queue<int, vector<int>, greater<int> > pque;
    for (int i = 0; i < n; i++){
        int tmp;
        cin>>tmp;
        pque.push(tmp);
    }
    int ans=0;
    while(pque.size()>1){
        int first = pque.top();
        pque.pop();
        int second = pque.top();
        pque.pop();
        ans += first+second;
        pque.push(first+second);
    }
    cout << ans << endl;

    return 0;
}