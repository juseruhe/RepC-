#include <iostream>
#include <stdlib.h>
using namespace std;


class Materias{
	
	private:
	   float nota1,nota2;
		
		
		public:
			
		Materias();
		void ColocarNotas(float,float);
		float matematicas();
		float sociales();
	
};

Materias::Materias(){
};



void Materias::ColocarNotas(float _nota1, float _nota2){
	
	nota1 = _nota1;
	nota2 = _nota2;
};


float Materias::matematicas(){
	
	return nota1;
}
;

float Materias::sociales(){
	
	return nota2;
};


int main () {
	
	
	
float Matematicas,Sociales;

cout<<"Ingrese Nota de  Matemáticas: "<<endl;
cin>>Matematicas;
cout<<"Ingrese Nota de Sociales:"<<endl;
cin>>Sociales;


Materias Maicol;


Maicol.ColocarNotas(Matematicas,Sociales);


cout<<"La nota de Matemáticas es de: "<<Maicol.matematicas()<<endl;
cout<<"La nota de Sociales es de: "<< Maicol.sociales()<<endl;
	
	
	
	
	system("pause");
	return 0;
}
