
#include<iostream>
#include "VectorMinMaxS.h"

VectorMinMaxS::VectorMinMaxS() : Solucion::Solucion() {
}

VectorMinMaxS::~VectorMinMaxS() {
}


string VectorMinMaxS::resolver() {
  stringstream sx;
  sx<<"  Valor Minimo "<< _pairMinMax.first;
  sx<<"  Valor Maximo "<< _pairMinMax.second;
  return sx.str();
}

void VectorMinMaxS::mezcla(pair<Solucion*,Solucion*> subSoluciones) {
   pair<int,int> v1;
   pair<int,int> v2;
	v1 = ((VectorMinMaxS*)subSoluciones.first)->_pairMinMax; //vector abajo ya ordenado
	v2 = ((VectorMinMaxS*)subSoluciones.second)->_pairMinMax; //vector arriba ya ordenado
	
	if(v1.first<v2.first)
	  _pairMinMax.first = v1.first;
	else
	  _pairMinMax.first = v2.first;
	
	if(v1.second>v2.second)
	   _pairMinMax.second = v1.second;
	else
	  _pairMinMax.second = v2.second;
		
}


Solucion* VectorMinMaxS::getInstance() {
	return new VectorMinMaxS();
}

void VectorMinMaxS::setValor( pair<int,int> v) { // guarda vector ordenado
	_pairMinMax = v;
}
