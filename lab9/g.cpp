#include <iostream>
using namespace std;

int main() {
    int x;
    cin>>x;
            if(x==1){
        int a;
        cin>>a;
        cout<<a; 
        }
      else if(x==2){
            int b,c;
              cin>>b>>c;
                if(b>c)
            cout<<b;
            else cout<<c;
     }
      else if(x==4){
          int d,f,g,h;
          cin>>d>>f>>g>>h;
          if(g>=h && f>=g && d>=f)
            cout<<d;
              else if(g>=h && f>=g && d<=f)
               cout<<f;
                else if(g>=h && f<=g && d<=g)
        cout<<g;
         else if(g<=h && f<=h && d<=h)
          cout<<h;
          } 
          else if(x==5){
              char num1,num2,num3,num4,num5;
              cin>>num1>>num2>>num3>>num4>>num5;
              if(num1>num2 && num2>num3&& num3>num4 && num4>num5)
              cout<<num1;
               else if(num1<num2 && num2<num3&& num3<num4 && num4<num5)
               cout<<num5;}
               else if(x==10){
                   int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
                   
                   cin>> n1>>n2>>n3>> n4>> n5>> n6>> n7>> n8>> n9>> n10;
                   if(n1<=n2<=n3<=n4<=n5<=n6<=n7<=n8<=n9<=n10)
                   cout<<n10;
                   }
               
               
               
              
              
              
              
    
}