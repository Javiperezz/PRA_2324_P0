#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(){
	 x = 0 ; 
	 y = 0 ; 
	 z =0 ; 
	 objeto = false ;



} 


BrazoRobotico::coger(){

	objeto=true;

} 

BrazoRobotico::soltar(){

       objeto=true;      
}

BrazoRobotico::mover(double x1 , double y1 , double z1 ){

        x=x1; 
	y=y1; 
	z=z1; 


}

BrazoRobotico::consulx (){

	return x ;

}

BrazoRobotico::consuly (){

	return y ; 


}

BrazoRobotico::consulz (){

	return z; 


}


BrazoRobotico::consulobjeto (){


	return objeto;

}


