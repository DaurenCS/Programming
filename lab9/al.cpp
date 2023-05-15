#include<iostream>

using namespace std;

int main(){
int x;cin>>x;
int a[x];
for(int i=0; i<x; ++i){
    cin>>a[i];}  //1,2,3
                 //0,1,2    
int y; cin>>y;
int arr[y];
for(int i=0; i<y; i++){
    cin>>arr[i];} //4,5,6
                  //0,1,2
    int a2[x+y]; //1,2,3,4,5,6
                 //0,1,2,3,4,5
    for(int i=0; i<x; i++){
        a2[i]=a[i];}
        
    for(int i=0; i<y; i++ ){
        a2[i+x]=arr[i];}

/*for(int q=0; q<x+y; q++ ){
    cout<<a2[q];}
}*/

   for(int r=0 ; r<x+y; r++){
       for(int i=0; i<x+y-1; i++){
           if(a2[i]>a2[i+1] ){
               int temp = a2[i];
               a2[i]=a2[i+1];
               a2[i+1]=temp;
               }
       
       } 
   
   
   }     
for(int i=0; i<x+y; i++){
    cout<<a2[i]<<" ";}
    return 0;
} 



        
        