#include <bits/stdc++.h>
#define MAX_N 10000
#define INF 1e9

using namespace std;

typedef int long long ll;
typedef int long l;
typedef pair<int, int> Pii;
const ll MOD = 1000000007;

void string_solve(){
    string s;
    string t;
    int n;
    cin >>n;
    cin >> s;
    string rs = s;
    reverse(rs.begin(),rs.end());
    while(!s.empty()){
        cout << 1 << endl;
        if(s>rs){
            t.push_back(rs[0]);
            s.pop_back();
            rs.erase(rs.begin());
        }else{
            t.push_back(s[0]);
            rs.pop_back();
            s.erase(s.begin());
        }
    }
    cout<<t<<endl;
}

void ant_solve(){
    int n;
    cin>> n;
    char S[n];
    char T[n];
    cin >> S;

    int a=0,b=n-1;
    while(a<=b){
        bool left=0;
        for(int i=0;i+a<=b;i++){
            if(S[a+i]<S[b-i]){
                left = true;
                break;
            }else if(S[a+i]>S[b-i]){
                left = false;
                break;
            }
        }
        if(left)putchar(S[a++]);
        else putchar(S[b--]);
    }
    putchar('\n');

}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ant_solve();
    return 0;
}