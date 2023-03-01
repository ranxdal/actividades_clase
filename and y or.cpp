#include <iostream>
using namespace std;

main(){
	//and (y) &&
	//or (o) || 
	
	char lapiz,lapicero,cuaderno;
	cout<<"Trae Lapiz (s/n): "<<endl;
	cin>>lapiz;
	cout<<"Trae Lapicero (s/n): "<<endl;
	cin>>lapicero;
	cout<<"Trae cuaderno (s/n): "<<endl;
	cin>>cuaderno;
	
	//puede entrar a la clase si trae un lapiz y un lapicero
	if((lapiz=='s' || lapicero=='s') && cuaderno=='s'){
		cout<<"Ingresa"<<endl;
	}else{
		cout<<"Lo siento no puede ingresar"<<endl;
	}
	
	system("pause");
}



	
