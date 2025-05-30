#include<iostream>
using namespace std;

int main(){
	int N;
	cout<<Digite un numero en el rango de 1 a 5: ; cin>>N;
	
	if(N==1){
		cout<<La vocal es: a<<endl;
	}else if(N==2){
		cout<<La vocal es: e<<endl;
	}else if(N==3){
		cout<<La vocal es: i<<endl;
	}else if(N==4){
		cout<<La vocal es: o<<endl;
	}else if(N==5){
		cout<<La vocal es: u<<endl;
	}else if(N>5 || N<1){
		cout<<No representa ninguna letra<<endl;
	}
	
	
	
	
	
	
	return 0;
}
