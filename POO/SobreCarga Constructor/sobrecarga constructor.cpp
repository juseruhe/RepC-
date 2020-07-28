#include <iostream>
#include <stdlib.h>
using namespace std;


class Fecha{
	
	private:
		int dia,mes,anio;
		
		public:
			
			Fecha(int,int,int);
			Fecha(long);
			
			void MostrarFecha();
			
			
	
};

Fecha::Fecha(int _dia,int _mes,int _anio)
{
	anio = _anio;
	mes = _mes;
	dia = _dia;
}

Fecha::Fecha(long fecha){
	
	anio= int(fecha/10000);
	mes= int((fecha-anio*10000)/ 100);
	dia = int(fecha-anio*10000-mes*100);
}


void Fecha::MostrarFecha(){
	
	cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}






int main () {
	
	Fecha Hoy(27,07,2020);
	Fecha Ayer(20200726);
	
	Hoy.MostrarFecha();
	Ayer.MostrarFecha();
	
	
	system("pause");
	return 0;
}
