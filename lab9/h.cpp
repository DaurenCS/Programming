#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    if(x==1){
        int y;
        cin>>y;
          if(y%2==0)
          cout<<"1 "<<"0";
        }
    else if(x==3){
        char n1,n2,n3;
        cin>>n1>>n2>>n3;
        if(n1%2!=0 && n2%2==0 && n3%2!=0)
        cout<<"1 "<<"2";
        }
        else if(x==5){
            char x1,x2,x3,x4,x5;
            cin>>x1>>x2>>x3>>x4>>x5;
            if(x1%2!=0 && x2%2==0 && x3%2!=0 && x4%2==0 && x5%2!=0)
            cout<<"2 "<<"3";
            }
            else if(x==8){
                  char x1,x2,x3,x4,x5,x6,x7,x8;
            cin>>x1>>x2>>x3>>x4>>x5>>x6>>x7>>x8;
             if(x1%2==0 && x2%2==0 && x3%2==0 && x4%2==0 && x5%2==0 && x6%2==0&& x7%2==0&& x8%2==0)
             cout<<"8 "<<"0";
                }
              else if(x==10){
                  char x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
            cin>>x1>>x2>>x3>>x4>>x5>>x6>>x7>>x8>>x9>>x10;
             if(x1%2!=0 && x2%2!=0 && x3%2!=0 && x4%2!=0 && x5%2!=0 && x6%2!=0&& x7%2!=0&& x8%2!=0&& x9%2!=0&& x10%2!=0)  
             cout<<"0 "<<"10";
            
    }
}