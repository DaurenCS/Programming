#include<bits/stdc++.h>

using namespace std;

static long long i = -1;

long long gen()
{
    i++;
      long long x=1;
      for(int j=0; j<i; j++)
         x*=i;   
    return x;
}
  
using namespace std;

int main()
{
    
    int n;
    cin>>n;
  
    
    vector<long long> v1(n+1);
    for(int i=0; i<=n; i++){
        v1.push_back(i);
    }

    generate(v1.begin(), v1.end(), gen);
   for(int i = 0; i <= n; i++){
        cout << v1[i] << ' ';
    }
    
    return 0;
}