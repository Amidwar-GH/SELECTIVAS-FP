#include<iostream>
using namespace std;

int main(){
	int numero;
	cout<<"BIENVENIDO A MI PROGRAMA"<<endl;
	cout<<"Digite un numero del uno al siete: "; cin>>numero;
	
	if(numero==1){
		cout<<"El dia de la semana es: Domingo"<<endl;
	}
	if(numero==2){
		cout<<"El dia de la semana es: Lunes"<<endl;
	}
	if(numero==3){
		cout<<"El dia de la semana es: Martes"<<endl;
	}
	if(numero==4){
		cout<<"El dia de la semana es: Miercoles"<<endl;
	}
	if(numero==5){
		cout<<"El dia de la semana es: Jueves"<<endl;
	}
	if(numero==6){
		cout<<"El dia de la semana es: Viernes"<<endl;
	}
	if(numero==7){
		cout<<"El dia de la semana es: Sabado"<<endl;
	}
	if(numero<1 || numero>7){
		cout<<"Dia de la semana no encontrado"<<endl;
	}
	if(numero == 7 || numero == 1){
		cout<<"Tienes el dia libre."<<endl;
	}else{
		cout<<"Tienes clases."<<endl;
	}
	cout<<"\nGRACIAS, PROGRAMA TERMINADO";
	
	return 0;
}
