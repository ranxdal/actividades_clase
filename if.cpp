#include <iostream>
using namespace std;
main(){
	//determinar si un numero es par o impar
	int num=0;
	cout<<"Ingrese el numero: ";
	cin>>num;
	
	if (num>0){
		cout<<"Positivo"<<endl;
	}else{
		if(num==0){
			cout<<"Neutro"<<endl;
		}else{
			cout<<"Negativo"<<endl;
		}
	}
	
	system("pause");
}
