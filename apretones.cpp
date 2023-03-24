#include<iostream>
using namespace std;
int main(){
	int p,apretones;
	cout<<"Ingrese la cantidad de personas que asistieron a la reunion: "; cin>>p;
	apretones=p*(p-1)/2;
	cout<<"En total hubo "<<apretones<<" apretones de manos";
	return 0;
}
