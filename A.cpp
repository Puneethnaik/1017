#include <bits/stdc++.h>
using namespace std;

struct marks{
    int a, b, c, d, id;
    marks(int x, int y, int z, int w, int i){
        a = x, b = y, c = z, d = w;
        id = i;
    }
    int getSum(){
        return a + b + c + d;
    }
    int getId(){
        return id;
    }
};

bool Comp(pair<int, marks> a, pair<int, marks> b){
    if(a.first == b.first){
        return a.second.getId() < b.second.getId();
    }
    else return a.first > b.first;
}
int main(){
    int n;
    cin >> n;
    vector<pair<int, marks> > store;
    for(int i = 0 ; i < n ; i++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        marks m = marks(a, b, c, d, (i + 1));
        store.push_back(make_pair(m.getSum(), m));
    }
    sort(store.begin(), store.end(), Comp);
    for(int i = 0 ; i < n ; i++){
        if(store[i].second.getId() == 1){
            cout << (i + 1) << endl;
            return 0;
        }
    }
    return 0;
}