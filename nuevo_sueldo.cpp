#include <iostream>
using namespace std;
int main() {
	double s=0,i=0,n=0;
	int c=0;
	cout<<"Ingrese el sueldo inicial"<<endl;
	cin>>s;
	cout<<"Ingrese la categoria: 1, 2, 3 o 4"<<endl;
	cin>>c;
	if(c==1){
		i=s*0.15;
		
	}
	else if(c==2){
		i=s*0.10;
	}
	else if(c==3){
		i=s*0.08;
	}
	else if(c==4){
		i=s*0.07;
	}
	else {
		cout<<"Categoria invalida"<<endl;
		return 0;
	}
		
	n=i+s;
	cout<<"El sueldo anterior era => "<<s<<endl;
	cout<<"La categoria es => "<<c<<endl;
	cout<<"El nuevo sueldo es => "<<n<<endl;
	
	return 0;
}
