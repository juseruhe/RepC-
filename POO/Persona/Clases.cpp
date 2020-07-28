#include <iostream>
#include <stdlib.h>
using namespace std;

class persona{
	
	private: 
	
	int edad;
	string nombre;
	
	public:
		persona(int,string);
		void leer();
		void correr();
};

persona::persona(int _edad,string _nombre){
	
	edad= _edad;
	nombre = _nombre;
}

void persona::leer(){
	
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void persona::correr(){
	
	cout<<"Soy  "<<nombre<<" y corriendo una maratón"<<endl;
}

int main () {
	
	
	persona p1= persona(23,"Juan");
	p1.leer();
	
	persona p2 = persona(8,"Juliana");
	p2.correr();
	
	persona p3 = persona(37,"Julie");
	p3.leer();
	p3.correr();
	
	system("pause");
	return 0;
}
