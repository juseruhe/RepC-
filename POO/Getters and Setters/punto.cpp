#include <iostream>
#include <stdlib.h>
using namespace std;


class Punto{
	
	private:
		int x,y;
		
		
		public:
			
		Punto();
		void SetPunto(int,int);
		int GetPuntoX();
		int GetPuntoY();
	
};

Punto::Punto(){
};



void Punto::SetPunto(int _x, int _y){
	
	x=_x;
	y=_y;
	
};


int Punto::GetPuntoX(){
	
	return x;
}
;

int Punto::GetPuntoY(){
	
	return y;
};



int main () {
	
	
	Punto punto1;
	
	punto1.SetPunto(15,10);
	
	cout<<punto1.GetPuntoX()<<endl;
	cout<<punto1.GetPuntoY()<<endl;
	
	
	system("pause");
	return 0;
}
