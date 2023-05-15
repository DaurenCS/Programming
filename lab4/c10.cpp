#include <bits/stdc++.h>

using namespace std;

bool sq(int n){
	int t=sqrt(n);
    if(t*t== n){
    	return true;
    }
    return false;
}
int main(){
    string s;
    cin >> s;
    stack<char> st;
    for(int i = 0; i < s.size(); i++){
        if(st.size() == 0){
            st.push(s[i]);
        }else{
            int x = st.top() - '0';
            int y = s[i] - '0';
            x = 10*x + y;
            if(sq(x)){
                st.pop();
            }else st.push(s[i]);
        }
    }
    if(st.size() == 0){
        cout << "Stack is empty\n";
        return 0;
    }
    while(st.size() > 0){
        cout << st.top();
        st.pop();
    }

    return 0;
}