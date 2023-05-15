#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	double sum;
	int x,y;
	cin>>x>>y>>n;
	vector< pair<pair<int,int>, double> > m(n);
 
  
	for(int i=0; i<n; i++){
       int a,b;
       cin>>a>>b;
        sum=sqrt(pow(a-x,2)+pow(b-y,2));
       pair<int,int> p =make_pair(a,b);
        m[i]=make_pair(p,sum);     
                  // 1 1  3.21
                  // 2 2  2.23    
       
	}
	vector<pair<double, pair<int,int> > > m1;
	vector<pair<pair<int,int>, double> >::iterator i;
	for(int i=0; i<n; i++){
         m1.push_back(make_pair(m[i].second,m[i].first));
	                               // 3.21        1 1
	                               // 2.23        2 2
	                              // first       second

	}
	 sort(m1.begin(),m1.end());

	
     for(int i=0; i<n; i++){
     	cout<<m1[i].second.first<<" "<<m1[i].second.second<<endl;
     }
	
	// for(vector<pair<double, pair<int,int> > >:: iterator it=m1.begin(); it!=m1.end(); it++ ){
	// 	cout<<it->second.first<<" "<<it->second.second<<endl;
	// }
	
}