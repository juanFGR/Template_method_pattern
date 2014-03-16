
#ifndef VECTORMINMAXP_H_
#define VECTORMINMAXP_H_

#include "../framework/Problema.h"
#include "VectorMinMaxS.h"
class VectorMinMaxP: public Problema {
public:
	VectorMinMaxP(vector<int>);
	virtual ~VectorMinMaxP();

	bool isCasoMinimo();
	pair<Problema*,Problema*> descomponer();
	void solver(Solucion* s);
	vector<int> subVector(int flag);
private:
	int _n;
	vector<int> _vector;
	pair<int,int> _pairMinMax;
};

#endif /* VECTORMINMAXP_H_ */
