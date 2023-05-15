#include<bits/stdc++.h>

using namespace std;



int main(){
	int n; cin>>n;
	
	double per,sum=0;
   map<string, int> m;
   int arr[n];

   for(int i=0; i<n; i++){
   	string s;
   	int a;
   	cin>>s>>a;
   	m[s]+=a;
     sum+=a;
     per=100/sum;
   }
  
   
 vector<pair<int, string>> v;

  map<string, int> :: iterator it2;
  for (it2=m.begin(); it2!=m.end(); it2++) 
  {
    v.push_back(make_pair(it2->second, it2->first));
  }

  sort(v.begin(), v.end());
  reverse(v.begin(), v.end()); 
  
	
	
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i].second << " " << v[i].first*per<<'%'<< endl;
	}
	return 0;
}

