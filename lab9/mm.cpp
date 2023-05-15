#include<iostream>

using namespace std;

int main(){
int a[1000000];
int sum=0;
int index=0;
while(cin){
    cin>>a[index];
    sum+=a[index];
    index++;
}
cout<<sum;
}