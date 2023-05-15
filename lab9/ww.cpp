#include <iostream>
using namespace std;
int sum(float*,int n);
 
int main()
{
    int n;
    cin>>n;
    
    float *arr=new float[n];
    
    for (int i=0;i<n;i++)
    cin>>arr[i];
   
    cout<<" "<<sum(arr,n);
 
    delete [] arr;
    
    return 0;
    
}
int sum(float *arr, int n)
{
    float sum=0;
    for (int i=0;i<n;i++)
    sum+=arr[i];
    return sum;
};