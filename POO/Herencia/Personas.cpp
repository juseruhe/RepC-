#include <iostream>
#include <stdlib.h>
using namespace std;


class Persona{
	
	private:
	       string nombre;
	       int edad;
		
		
		public:
			
		Persona(string,int);
		
	   void MostrarPersona();
	
};


Persona::Persona(string _nombre,int _edad){
	
	nombre= _nombre;
	edad = _edad;
}


void Persona::MostrarPersona(){
	
	cout<<"El Nombre de la Persona es:  "<<nombre<<endl;
	cout<<"La Edad de la Persona es:  "<<edad<<endl;
	
}


class Empleado:public Persona{
	
	private: 
	float sueldo;
	
	public:
	Empleado(string,int,float);
	
	void MostrarEmpleado();
	
	
	
	
};


Empleado::Empleado(string _nombre,int _edad, float _sueldo):Persona(_nombre,_edad){
	
	
	sueldo= _sueldo;
	
}


void Empleado::MostrarEmpleado(){
	
	MostrarPersona();
	
	cout<<"El Sueldo del Empleado es: "<<sueldo<<endl;
	
}


class Estudiante: public Persona {
	
	private:
		
		float NotaFinal;
		
		public:
			
			Estudiante(string,int,float);
			
		void	MostrarEstudiante();
	
};


Estudiante::Estudiante(string _nombre,int _edad, float _NotaFinal):Persona(_nombre,_edad){
	
	
	NotaFinal = _NotaFinal;
}


void Estudiante::MostrarEstudiante(){
	MostrarPersona();
	
	cout<<"La Nota Final del Estudiante es: "<<NotaFinal<<endl;
}


class Universitario:public Estudiante {
	
	private:
		
		string carrera;
		
		public:
			
			Universitario(string,int,float,string);
			
			void MostrarUniversitario();
	
	
	
	
};


Universitario::Universitario(string _nombre,int _edad,float _NotaFinal,string _carrera):Estudiante(_nombre,_edad,_NotaFinal){
	
	carrera = _carrera;
	
}


void Universitario::MostrarUniversitario(){
	
	MostrarEstudiante();
	
	cout<<"La Carrera del Estudiante Universitario es: "<<carrera<<endl;
}



int main () {
	
Empleado Empleado1("Juan",23,100000);

cout<<"-Empleado-";

Empleado1.MostrarEmpleado();

cout<<"\n"<<endl;


Estudiante Estudiante1("Sebastian",19,3.2);

cout<<"-Estudiante-";

Estudiante1.MostrarEstudiante();

cout<<"\n"<<endl;



Universitario Universitario1("Alejandro",35,4.3,"Ingeniería de Sistemas");

cout<<"-Universitario-";

Universitario1.MostrarUniversitario();

cout<<"\n"<<endl;

	
	
	
	system("pause");
	return 0;
}
