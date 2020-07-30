#include <iostream>
#include <stdlib.h>
using namespace std;


class Perro{
	
	private:
		string nombre,raza;
		
		public:
			
			Perro(string,string);
			~Perro();
			void MostrarDatos();
			void jugar();
			
			
	
};

Perro::Perro(string _nombre,string _raza)
{
	nombre = _nombre;
	raza = _raza;
}





Perro::~Perro(){
	
	
}


void Perro::MostrarDatos(){
	
	cout<<"El nombre del perro es: "<<nombre<<" y la raza es: "<<raza<<endl;
}


void Perro::jugar(){
	
	cout<<"El perro "<<nombre<<" esta jugando"<<endl;
}




int main () {
	
	Perro Primero("Zacha","Bulldog");
	
	Primero.MostrarDatos();
	Primero.jugar();
	Primero.~Perro();
	
	system("pause");
	return 0;
}
