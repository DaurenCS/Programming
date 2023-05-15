#include <bits/stdc++.h>

using namespace std;

int main(){
  int n; cin>>n;
  queue<string> q;
  string s;

  for(int i=0; i<n; i++){
    int x;
    cin>>x;
    if(x==1){
      cin>>s;
      q.push(s);
      cout<<q.front()<<endl;
    }
    else if(x==2){
      if(!q.empty())
        q.pop();
      if(!q.empty())
        cout<<q.front()<<endl;
      else 
        cout<<"queue is empty"<<endl;

    }
  }
}