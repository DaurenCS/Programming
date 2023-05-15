#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int x = 0, y = 0;
    for(int i = 0; i < s.size(); i++){
        if((i+1)%2 == 0){
            x += s[i]%10;   
        }      
        else{
            y += s[i]%10;
        }

    } 
    
    if(x == y)cout << "YES";
    else cout << "NO"; 
   
    return 0;
}