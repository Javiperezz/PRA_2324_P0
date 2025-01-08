#include <iostream>
#include "BrazoRobotico.h"

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujetando){
	this->x=x;
	this->y=y;
	this->z=z;
	this->sujetando=sujetando;
}

double BrazoRobotico::getX(){
	return x;
}

double BrazoRobotico::getY(){
	return y;
}

double BrazoRobotico::getZ(){
	return z;
}

bool BrazoRobotico::getSujetando(){
	return sujetando;
}

void BrazoRobotico::coger(){
	sujetando=true;
}

void BrazoRobotico::soltar(){
	sujetando=false;
}

void BrazoRobotico::mover(double x, double y, double z){
	this->x=x;
	this->y=y;
	this->z=z;
}
