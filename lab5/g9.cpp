#include<bits/stdc++.h>
 
using namespace std; 

int main(){
	string s;
    cin >> s;
    queue<char> q;
    for(int i = 0; i < s.size(); i++){
        q.push(s[i]);
    }
    while(!q.empty()){
        if(q.front() == '0'){
            cout << q.front();
            q.pop();
        }
        else{
            char t = q.front();
            q.pop();
            if(q.empty()){
                cout << t;
                return 0;
            }
            if(q.front() == '1'){
                q.pop();
            }
            else{
                cout << t << q.front();
                q.pop();
            }
        }
    }
}

