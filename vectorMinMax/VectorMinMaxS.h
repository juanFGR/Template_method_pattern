
#ifndef VECTORMINMAXS_H_
#define VECTORMINMAXS_H_

#include "../framework/Solucion.h"

class VectorMinMaxS: public Solucion {
public:
	VectorMinMaxS();
	virtual ~VectorMinMaxS();

	string resolver();
	void mezcla(pair<Solucion*,Solucion*>);
	Solucion* getInstance();

	void setValor(pair<int,int> v);

private:
	int _n;
        pair<int,int> _pairMinMax;
};

#endif /* VECTORMINMAXS_H_ */
