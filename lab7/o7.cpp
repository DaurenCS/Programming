#include <iostream>
#include <algorithm>

using namespace std;

int f(int n, int t){
    if(n == 0){
        return 0;
    }
    char c;
    if(n%t >= 10)
        c = (n % t) + 55;
    else
        c = (n % t) + 48;
    f(n/t, t);
    cout << c;    
}

int main(){
    int t, n;
    cin >> n >> t;
    f(n, t);
}