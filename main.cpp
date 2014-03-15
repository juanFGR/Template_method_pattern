
#ifndef MAIN_
#define MAIN_

#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include"framework/Framework.h"
#include"examples/FibonacciP.h"
#include"examples/FibonacciS.h"
#include"mergeSort/MergeSortP.h"
#include"mergeSort/MergeSortS.h"
using namespace std;


int main(int argc, char* argv[]){
	if (argc != 2) {
		cout << "\nNúmero de parametros incorrecto. Encontrado " << argc-1 << " requerido 1."<< endl;
		exit(-1);
	}

	Problema* problema = new FibonacciP(atoi(argv[1]));
	Solucion* solucion = new FibonacciS();
	Framework* framework = new Framework();

	framework->divideyVenceras(problema, solucion);
	cout << "\nResultado: FibonacciP" << endl;
	solucion->resolver();

vector<int> first; 
first.push_back(3);
first.push_back(9);
first.push_back(8);
first.push_back(1);
first.push_back(6);
first.push_back(3);
first.push_back(9);
first.push_back(8);
first.push_back(1);
first.push_back(6);
first.push_back(3);
first.push_back(9);
first.push_back(8);
first.push_back(1);
first.push_back(4);
first.push_back(3);
first.push_back(2);
first.push_back(15);
first.push_back(9);
first.push_back(50);
	Problema* problema1 = new MergeSortP(first);
	Solucion* solucion1 = new MergeSortS();
	Framework* framework1 = new Framework();

	framework1->divideyVenceras(problema1, solucion1);
	cout << "\nResultado: MergeSortP" << endl;
	solucion1->resolver();
};

#endif /* MAIN_ */
