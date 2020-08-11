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


class Alumno:public Persona{
	
	private:
		string CodigoAlumno;
		float NotaFinal;
		
		
		public:
			
			Alumno(string,int,string,float);
			
			void MostrarAlumno();
	
};


Persona::Persona(string _nombre,int _edad){
	
	nombre = _nombre;
	edad = _edad;
	
	
}


void Persona::MostrarPersona(){
	
	cout<<"El Nombre de la persona es: "<<nombre<<endl;
	cout<<"La edad de la persona es: "<<edad<<endl;
	
}



Alumno::Alumno(string _nombre,int _edad,string _CodigoAlumno,float _NotaFinal):Persona(_nombre,_edad){
	
	CodigoAlumno = _CodigoAlumno;
	NotaFinal= _NotaFinal;
	
	
	
}


void Alumno::MostrarAlumno() {
	
 MostrarPersona();
 cout<<"El Código del Alumno es: "<<CodigoAlumno<<endl;
cout<<"La Nota Final del Alumno es: "<<NotaFinal<<endl;
}





int main () {
	
	Alumno Juan("Juan",23,"JSRH240597",3.5);
	
	Juan.MostrarAlumno();
	

	
	
	
	system("pause");
	return 0;
}
