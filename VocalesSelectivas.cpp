#include<iostream>
using namespace std;

int main(){
	int N;
	char Respuesta;
	cout<<"________________________"<<endl;
	cout<<"BIENVENIDO A MI PROGRAMA"<<endl;
	cout<<"************************"<<endl;
	
	do{
		cout<<"Digite un numero en el rango de 1 a 5: "; cin>>N;
		if(N<0){
			N=N*-1;
		}
		if(N==1){
		cout<<"La vocal es: a"<<endl;
	}else if(N==2){
		cout<<"La vocal es: e"<<endl;
	}else if(N==3){
		cout<<"La vocal es: i"<<endl;
	}else if(N==4){
		cout<<"La vocal es: o"<<endl;
	}else if(N==5){
		cout<<"La vocal es: u"<<endl;
	}else if(N>5 || N<1){
		cout<<"No representa ninguna letra"<<endl;
	}
	cout<<"Desea saber otra vocal (S/N)?: "; cin>>Respuesta;
	
	}while(Respuesta != 'N');
	
	cout<<"\nPROGRAMA TERMINADO, GRACIAS";
	
	
	
	
	return 0;
}
