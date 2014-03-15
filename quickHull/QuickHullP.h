
#ifndef QUICKHULLP_H_
#define QUICKHULLP_H_

#include "../framework/Problema.h"
#include "QuickHullS.h"
class QuickHullP: public Problema {
public:
	QuickHullP(vector<int>);
	virtual ~QuickHullP();

	bool isCasoMinimo();
	pair<Problema*,Problema*> descomponer();
	void solver(Solucion* s);
	vector<int> subVector(int flag);
private:
	int _n;
	vector<int> _vector;
};

#endif /* QUICKHULLP_H_ */
