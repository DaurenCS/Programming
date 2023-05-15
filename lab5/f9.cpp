#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    stack<char> sk;
    bool flag = true; 
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '('){
            sk.push('(');
        }else if(s[i] == ')'){
            if(!sk.empty()){
                sk.pop();
            }else {
                flag = false;
                break;
            }
        }
    }
    if(!flag or !sk.empty())cout << "NO";
    else cout << "YES";
    

    return 0;
    
}
