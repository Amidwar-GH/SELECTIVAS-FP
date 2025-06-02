#include<iostream>
using namespace std;

int main(){
	float TT,CA,NCA; //tipo de tarjeta // credito actual // nuevo credito aumentado
	cout<<Digite el tipo de tarjeta: ; cin>>TT;
	cout<<Digite su credito actual: ; cin>>CA;
	
	if(TT==1){
		NCA=CA+(CA*0.25);
		cout<<El aumento de crédito es <<NCA<<endl;
		return 0;
	}
	if(TT==2){
		NCA=CA+(CA*0.35);
		cout<<El aumento de crédito es <<NCA<<endl;
		return 0;
	}
	if(TT==3){
		NCA=CA+(CA*0.4);
		cout<<El aumento de crédito es <<NCA<<endl;
		return 0;
	}
	if(TT>3 || TT<1){   // || = o disyuncion tambien esta el &&
		NCA=CA+(CA*0.5);
		cout<<El aumento de crédito es <<NCA<<endl;
		return 0;
	}
	
	return 0;
}
