
#include<iostream>
#include "MergeSortS.h"

MergeSortS::MergeSortS() : Solucion::Solucion() {
}

MergeSortS::~MergeSortS() {
}


string MergeSortS::resolver() {
  _n = _vector.size();
stringstream sx;
  for(int i=0; i<_n;i++)
	sx << _vector[i] << " ";
  return sx.str();
}

void MergeSortS::mezcla(pair<Solucion*,Solucion*> subSoluciones) {
  vector<int> v1;
  vector<int> v2;
	v1.swap(((MergeSortS*)subSoluciones.first)->_vector); //vector abajo ya ordenado
	v2.swap(((MergeSortS*)subSoluciones.second)->_vector); //vector arriba ya ordenado
	
	for(int i=0; i<v1.size();i++){
	  _vector.push_back(v1[i]);
	}
	for(int i=0; i<v2.size();i++){
	  _vector.push_back(v2[i]);
	}
	_n = _vector.size();
	
	int aux;
	
	//MEZCLAR LOS DOS VECTORES FIALES QUE YA ESTAN ORDENADOS CADA UNO
 for(int i=0; i<_vector.size(); i++){
  for(int j=0; j<_vector.size()-1; j++){
  if(_vector[j]>_vector[j+1]){
    aux = _vector[j];
    _vector[j] = _vector[j+1];
    _vector[j+1] = aux;
  }
 }
 }
 
}


Solucion* MergeSortS::getInstance() {
	return new MergeSortS();
}

void MergeSortS::setValor(vector<int> v) { // guarda vector ordenado
	_vector = v;
	_n = _vector.size();
}
