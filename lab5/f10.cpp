#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin>>n;
	vector<int> v;
	double sum=0;
	double cr=0;

	for(int i=0; i<n; i++){
		double a,b,c,d;
		cin>>a>>b>>c>>d;
		cr+=d;
		 double o=a+b+c;
		if(a+b>=30 && c>=20){
			if(o>=50 && o<=54 ){
				sum+=1.0;
			}
			else if(o>=55 && o<=59 ){
				sum+=1.3333333333*d;
			}
			else if(o>=60 && o<=64 ){
				sum+=1.6666666667*d;
			}
			else if(o>=65 && o<=69 ){
				sum+=2.0*d;
			}
			else if(o>=70 && o<=74 ){
				sum+=2.33333333338*d;
			}
			else if(o>=75 && o<=79 ){
				sum+=2.666666666667*d;
			}
			else if(o>=80 && o<=84 ){
				sum+=3.0*d;
			}
			else if(o >= 85 and o <= 89){
                sum += 3.3333333333*d;
            }
            else if(o >= 90 and o <= 94){
                sum += 3.666666666667*d;
            }
            else if(o >= 95 and o <= 100){
                sum += 4.000*d;
            }


		}

	}
	cout<< sum/cr;
}