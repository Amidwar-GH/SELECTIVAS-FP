#include<iostream>
using namespace std;

int main(){
	float N1,N2,N3,SN,P; //nota uno nota dos nota tres suma de notas
	char nombre[50]; 

    cout << "Digite su nombre: "; cin>> nombre;
	cout<<"Digite la primera nota: "; cin>>N1;
	cout<<"Digite la segunda nota: "; cin>>N2;
	cout<<"Digite la tercera nota: "; cin>>N3;
	
	if(N1<0){
		N1=N1*-1;
	}
	if(N2<0){
		N2=N2*-1;
	}
	if(N3<0){
		N3=N3*-1;
	}
	
	SN=N1+N2+N3;
	P=SN/3;
	
	if(P>=10.5){ //OBSERVACION P>=70?
		cout<<nombre<<" Estas aprobado";
	}else{
		cout<<nombre<<" Estas desaprobado";
	}
	
	
	return 0;
}
