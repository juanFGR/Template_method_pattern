
#ifndef MERGESORTP_H_
#define MERGESORTP_H_

#include "../framework/Problema.h"
#include "MergeSortS.h"
class MergeSortP: public Problema {
public:
	MergeSortP(vector<int>);
	virtual ~MergeSortP();

	bool isCasoMinimo();
	pair<Problema*,Problema*> descomponer();
	void solver(Solucion* s);
	vector<int> subVector(int flag);
private:
	int _n;
	vector<int> _vector;
};

#endif /* MERGESORTP_H_ */
