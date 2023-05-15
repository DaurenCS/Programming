#include<bits/stdc++.h>

using namespace std;
 

string fun(string a, int start, int end){
    if(start>=end  )
        return "Yes";
    if(a[start]==a[end]){
        return fun(a,start+1,end-1 );
    }
    return "No";
}

int main(){
    string a;
    cin>>a;

    cout<<fun(a,0, a.size()-1 );
}
