
#include "VectorMinMaxP.h"

VectorMinMaxP::VectorMinMaxP(vector<int> v) : Problema::Problema() {//recibe un vector y el tamaño y lo guarda
	_n = v.size();
	_vector = v; 
}

VectorMinMaxP::~VectorMinMaxP() {

}

bool VectorMinMaxP::isCasoMinimo() { //deberia decir si esta ordenado o si el vector es tamaño 1?
	return (_n <= 2);
}

pair<Problema*,Problema*> VectorMinMaxP::descomponer() {
	pair<Problema*,Problema*> subProblemas;
	subProblemas.first = new VectorMinMaxP(subVector(0));
	subProblemas.second = new VectorMinMaxP(subVector(1));
	return subProblemas;
}

void VectorMinMaxP::solver(Solucion* s) {//aqui orden y guardo como solucion parcial
 int min = 100000;
 int max = -100000;
 for(int i=0; i<_vector.size(); i++){
  if(_vector[i]>max)
    max = _vector[i];
  if(_vector[i]<min)
    min = _vector[i];
 }
 _pairMinMax.first = min;
 _pairMinMax.second = max;
 
	((VectorMinMaxS*)s)->setValor(_pairMinMax);
}

vector<int> VectorMinMaxP::subVector(int flag){
   int m = _n/2;
   vector<int> tmp;
   if(flag == 0){
     for(int i=0;i<m;i++){
       tmp.push_back(_vector[i]);
    }
  }else if(flag == 1){
        for(int i=m;i<_n;i++){
       tmp.push_back(_vector[i]);
    }
  }
  return tmp;
}
