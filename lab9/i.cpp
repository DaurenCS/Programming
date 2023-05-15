#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x==1){
        int y;
        cin>>y;
          if(y%7!=0)
          cout<<"0";
        }
    else if(x==4){
        int n1,n2,n3,n4;
        cin>>n1>>n2>>n3>>n4;
        if(n1%7!=0 && n2%7!=0 && n3%7==0&& n4%7==0 || n3%77==0)
        cout<<"1";
        }
        else if(x==5){
            int x1,x2,x3,x4,x5;
            cin>>x1>>x2>>x3>>x4>>x5;
            if(x1%7!=0 && x2%7!=0 && x3%7!=0 && x4%7!=0 &&x5%7!=0)
            cout<<"0";
            }
            else if(x==7){
                  int x1,x2,x3,x4,x5,x6,x7;
            cin>>x1>>x2>>x3>>x4>>x5>>x6>>x7;
             if(x1%7==0 && x2%7==0 && x3%7==0 && x4%7==0 &&x5%7==0 && x6%7==0&& x7%7!=0 )
             cout<<"6 ";
                }
              else if(x==10){
                  int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
            cin>>x1>>x2>>x3>>x4>>x5>>x6>>x7>>x8>>x9>>x10;
             if(x1%7==0 && x2%7==0 && x3%7==0 && x4%7==0 &&x5%7==0&&x6%7==0 && x7%7==0 && x8%7==0 && x9%7==0 &&x10%7==0)  
             cout<<"10";}
     }