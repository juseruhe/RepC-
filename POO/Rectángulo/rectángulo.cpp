#include <iostream>
#include <stdlib.h>
using namespace std;

class Rectangulo{
	
	private: 
	
	float largo;
	float ancho;
	
	public:
		Rectangulo(float,float);
		void Area();
		void Perimetro();
};

Rectangulo::Rectangulo(float _largo,float _ancho){
	
	largo= _largo;
	ancho = _ancho;
}

void Rectangulo::Area(){
	
	float Area= largo * ancho;
	
	cout<<"El Area del Rectangulo es: "<<Area<<endl;
}

void Rectangulo::Perimetro(){
	
	
	float Perimetro = 2*(largo+ancho);
	
	cout<<"El Perimetro del Rectangulo es: "<<Perimetro<<endl;
}

int main () {
	
	Rectangulo proceso1 = Rectangulo(10,5);
	
	proceso1.Perimetro();
	
	system("pause");
	return 0;
}
