#include <iostream>
#include <stdlib.h>
using namespace std;


class Tiempo{
	
	private:
		int horas,minutos,segundos;
		
		public:
			
			Tiempo(int,int,int);
			Tiempo(int);
			
			void MostrarTiempo();
			
			
	
};

Tiempo::Tiempo(int _horas,int _minutos,int _segundos)
{
	horas = _horas;
	minutos = _minutos;
	segundos = _segundos;
}

Tiempo::Tiempo(int TiempoSegundos){
	
	horas = TiempoSegundos/3600;
	TiempoSegundos %= 3600;
	minutos= TiempoSegundos /60;
	segundos= TiempoSegundos% 60;
}



void Tiempo::MostrarTiempo(){
	
	cout<<"La Hora es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}






int main () {
	
Tiempo Actual(12,57,32);

Tiempo UnaHora(50090);

Actual.MostrarTiempo();

UnaHora.MostrarTiempo();
	
	system("pause");
	return 0;
}
