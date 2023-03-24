#include<iostream>
using namespace std;
int main(){
	int monto, d100, d50,d10,m1;
	cout<<"Ingrese la cantidad de dinero: "; cin>>monto;
	d100=monto/100;
	monto=monto%100;
	d50=monto/50;
	monto=monto%50;
	d10=monto/10;
	monto=monto%10;
	m1=monto/1;
	cout<<"Los billetes de 100 requeridos son: "<<d100<<endl;
	cout<<"Los billetes de 50 requeridos son: "<<d50<<endl;
	cout<<"Los billetes de 10 requeridos son: "<<d10<<endl;
	cout<<"Las monedas de 1 requeridos son: "<<m1;
	return 0;
}
