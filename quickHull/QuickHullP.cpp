
#include "QuickHullP.h"

QuickHullP::QuickHullP(vector<int> v) : Problema::Problema() {//recibe un vector y el tamaño y lo guarda
	_n = v.size();
	_vector = v; 
}

QuickHullP::~QuickHullP() {

}

bool QuickHullP::isCasoMinimo() { //deberia decir si esta ordenado o si el vector es tamaño 1?
	return (_n <= 2);
}

pair<Problema*,Problema*> QuickHullP::descomponer() {
	pair<Problema*,Problema*> subProblemas;
	subProblemas.first = new QuickHullP(subVector(0));
	subProblemas.second = new QuickHullP(subVector(1));
	return subProblemas;
}

void QuickHullP::solver(Solucion* s) {//aqui orden y guardo como solucion parcial
 int aux;
 for(int i=0; i<_vector.size(); i++){
  for(int j=0; j<_vector.size()-1; j++){
  if(_vector[j]>_vector[j+1]){
    aux = _vector[j];
    _vector[j] = _vector[j+1];
    _vector[j+1] = aux;
  }
 }
 }
	((QuickHullS*)s)->setValor(_vector);
}

vector<int> QuickHullP::subVector(int flag){
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
