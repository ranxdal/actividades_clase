#include <iostream>
using namespace std;
main(){
	//determianr un numero si es par o impar
	int num=0;
	cout<<"Ingrese numero: ";
	cin>>num;
	//dividir un numero entre dos su residuo es cero entonces es par
	if((num%2)==0){
		cout<<"Par"<<endl;
	}else{
		cout<<"Impar"<<endl;
	}
	
	
	
	system("pause");
}
