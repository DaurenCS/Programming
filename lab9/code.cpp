#include <iostream>
using namespace std;



int main()
{
    int x, y=0;
    cin >> x;
    
    while (x > 0 ) {
         y *= 2;
        y += x % 2;
        x /=2;
    }        
        cout << y ;
    

}

