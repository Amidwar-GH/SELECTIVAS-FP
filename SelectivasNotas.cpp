#include<iostream>
using namespace std;

int main(){
	float Nota1,Nota2,Nota3,SumaNotas,Promedio; //nota uno nota dos nota tres suma de notas
	char nombre[50]; 

    cout << "Digite su nombre: "; cin>> nombre;
	cout<<"Digite la primera nota: "; cin>>Nota1;
	cout<<"Digite la segunda nota: "; cin>>Nota2;
	cout<<"Digite la tercera nota: "; cin>>Nota3;
	
	if(Nota1<0){
		Nota1=Nota1*-1;
	}
	if(Nota2<0){
		Nota2=Nota2*-1;
	}
	if(Nota3<0){
		Nota3=Nota3*-1;
	}
	
	SumaNotas=Nota1+Nota2+Nota3;
	Promedio=SumaNotas/3;
	
	if(Promedio>=10.5){ //OBSERVACION P>=70?
		cout<<nombre<<" Estas aprobado";
	}else{
		cout<<nombre<<" Estas desaprobado";
	}
	
	
	return 0;
}
