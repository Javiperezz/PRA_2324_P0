#include "BrazoRobotico.h"
#include <iostream>
#include <iomanip>


int main(){

	
	std::cout << std::fixed;
	std::cout << std::setprecision(2);

	BrazoRobotico b1(0.0,0.0,0.0,false);
	std::cout << "El brazo se encuentra en las coordenadas: (" << b1.getX() << ", " <<
		b1.getY() << ", " << b1.getZ() << ")";
	if(b1.getSujetando()){
		std::cout << ", y esta sujetando un objeto" << std::endl;
	}else{
		std::cout << ", y no esta sujetando ningun objeto" << std::endl;
	}
	
	b1.mover(5.2,3.0,1.0);
	std::cout << "El brazo se ha movido a las coordenas: (" << b1.getX() << ", " <<
		                b1.getY() << ", " << b1.getZ() << ")"<< std::endl;
	
	b1.coger();
	std::cout << "El brazo ha empezado a sujetar un objeto" << std::endl;


	return 0;
}
