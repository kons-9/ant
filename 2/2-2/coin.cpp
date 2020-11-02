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
    int coin[6];
    int ans[6];
    int res=0;
    for (int i = 0; i < 6; i++){
        cin>>coin[i];
    }
    int A;
    cin >> A;
    int value[6] = {1,5,10,50,100,500};

    for (int i = 5; i >= 0; i--){
        int tmp = A/value[i];
        tmp = min(tmp,coin[i]);
        A -= value[i]*tmp;
        // ans[i]=tmp;
        res += tmp;
    }

    cout << res << endl;
    return 0;
}