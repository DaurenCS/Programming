#include <bits/stdc++.h>
using namespace std;

bool cmp(vector<int> a, vector<int> b){
    int suma = 0, sumb = 0;
    for(int i = 0; i <= a[0]; i++){
        suma += a[i];
    }
    for(int i = 0; i <= b[0]; i++){
        sumb += b[i];
    }
    return suma < sumb;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> v;
    for(int i = 0; i < n; i++){
        int x;cin >> x;
        vector<int> t;
        t.push_back(x);
        for(int j = 0; j < x; j++){
            int y;cin >> y;
            t.push_back(y);
        }
        v.push_back(t);
    }
    sort(v.begin(), v.end(), cmp);
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= v[i][0]; j++){
            cout <<  v[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}