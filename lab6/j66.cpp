#include <bits/stdc++.h>
using namespace std;
int max(int a[]){
    int max = a[0];
    for(int i = 0; i < 4; i++){
        if(a[i] > max)max = a[i];
    }
    return max;
}

int main(){
    int a[4];
    for(int i = 0; i < 4; i++){
        cin >> a[i];
    }
    int t = max(a);
    cout << t;
}