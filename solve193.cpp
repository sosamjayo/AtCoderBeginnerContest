#include <algorithm> 
#include <cstdio>
#include <iostream>
#include <map>
#include <math.h>
#include <queue>
#include <set>
#include <stack>
#include <unordered_set>
#include <vector>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define Sort(Array) sort(Array.begin(), Array.end())
#define Reverse(a) reverse(a.begin(), a.end())
#define out(ans) cout << ans << endl;
const int MOD = 1000000007;
const int INF = 2147483647;
const ld PI = 3.14159265358979323846;



void problem_A() {
    int A, B;
    cin >> A >> B;

    printf("%Lf\n", (ld)(A - B) / A * 100);
}


void problem_B() {
    int N; cin >> N;
    vector<int> A(N), P(N), X(N);
    rep(i,N) cin >> A[i] >> P[i] >> X[i];
    
    bool ok = false;
    int res = INF;
    rep(i,N) {
        if (X[i] - A[i] > 0) {
            ok = true;
            res = min(res, P[i]);
        }
    }

    if (ok) {
        cout << res << endl;
    } else {
        cout << -1 << endl;
    }
}


void problem_C() {
    ll N; cin >> N;

    unordered_set<ll> S;
    for (ll a = 2; a <= sqrt(N); ++a) {
        ll tmp = a;
        while(true) {
            if (tmp <= N / a) {
                tmp *= a;
                S.insert(tmp);
            } else {
                break;
            }
        }
    }

    cout << N - S.size() << endl;
}


int main(){
    
    problem_C();
    
    return 0;
}