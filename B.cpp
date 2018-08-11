#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll f(ll n){
    if(n < 2){
        return 0;
    }
    return ((n * (n - 1)) / 2LL);
}
int main(){
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll az = count(a.begin(), a.end(), '0'), ao = n - az;
    ll bz = count(b.begin(), b.end(), '0'), bo = n - bz;
    ll co = 0, cz = 0;
    for(ll i = 0 ; i < n ; i++){
        if(a[i] == '0' and b[i] == '1'){
            cz++;
        }
        else if(a[i] == '1' and b[i] == '1'){
            co++;
        }
    }
    // cout << az << " " << ao << " " << bo << " " << cz << " " << co << endl;
    ll ans = f(az) + f(ao) + f(bo) - f(cz) - f(co);
    cout << f(n) - ans << endl;
    return 0;
}