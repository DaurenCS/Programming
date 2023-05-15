#include <bits/stdc++.h>
using namespace std;

bool fun(pair<string, int>&a , pair<string, int>&b){
		if(a.second==b.second){
		return a.first<b.first;
	}
	return a.second>b.second;
}

int main(){
	string s;
	map<string, int>mp;
	vector<pair<string,int>>v;
	while(cin >> s){
		mp[s]++;
	}
	for(auto x:mp){
		v.push_back({x.first, x.second});
	}
	sort(v.begin(), v.end(), fun);

	for(int i=0; i<v.size(); i++){
		cout<<v[i].first<<":"<<v[i].second<<endl;
	}


	return 0;
}
#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<vector<char>, int>&a , pair<vector<char>, int>&b){
      if(a.second==b.second){
      return a.first<b.first;
   }
   return a.second>b.second;
}


int main(){
   string s;

   getline(cin,s);
   map<vector<char>,int > m;
   vector<char> v1;
   
    int cont=0;
   for(int i=0; i<s.size(); i++){
     if(s[i]!=' '){ 
      v1.push_back(s[i]);
        cont++;
     }
      for(int j=0; j<1; j++){
         if(s[i]==' ' || i==s.size()-1){
            m[v1]++;
            v1.erase(v1.begin(),v1.end());
           

         }
         else 
            break;
      }
   }
   vector<pair<vector<char> ,int> > v(m.begin(), m.end());
   sort(v.begin(),v.end(), cmp);
   
for(int i=0; i<v.size(); i++){
   for(int j=0; j<v[i].first.size(); j++){
      cout<<v[i].first[j];
   }
   cout<<" : "<<v[i].second<<endl;
}

}