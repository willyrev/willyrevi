#include<iostream>
using namespace std;
int main (){
	float sb, des, sn, quincena, finmes;
	cout<<"Ingrese su sueldo bruto: "; cin>>sb;
	des=sb*0.12;
	sn=sb-des;
	quincena=sn*0.40;
	finmes=sn-quincena;
	cout<<"Su descuento es: "<<des<<endl;
	cout<<"Su sueldo neto es: "<<sn<<endl;
	cout<<"Su quincena es: "<<quincena<<endl;
	cout<<"Su pago a fin de mes es: "<<finmes;
	return 0;
}
