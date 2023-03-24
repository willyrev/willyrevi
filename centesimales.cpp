#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float s,c,r;
	cout<<"Digite en grados sexagesimales: "; cin>>s;
	c=(s*200)/180;
	r=(s*M_PI)/180;
	cout<<"En centesimales es: "<<c<<" y en radial es: "<<r;
	return 0;
}
