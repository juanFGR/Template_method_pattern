
#ifndef MERGESORTS_H_
#define MERGESORTS_H_

#include "../framework/Solucion.h"

class MergeSortS: public Solucion {
public:
	MergeSortS();
	virtual ~MergeSortS();

	void resolver();
	void mezcla(pair<Solucion*,Solucion*>);
	Solucion* getInstance();

	void setValor(vector<int> v);

private:
	int _n;
        vector<int> _vector;
};

#endif /* MERGESORTS_H_ */
