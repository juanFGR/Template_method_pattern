CC=gcc
CXX=g++
RM=rm -f
CFLAGS=-g -O2
LDFLAGS=-g -O2

FRAMEWORK_SRS=framework/Framework.cpp framework/Problema.cpp framework/Solucion.cpp
EXAMPLE_SRS=examples/FibonacciP.cpp examples/FibonacciS.cpp
EXAMPLE_SRS1=mergeSort/MergeSortP.cpp mergeSort/MergeSortS.cpp
EXAMPLE_SRS2=quickHull/QuickHullP.cpp quickHull/QuickHullS.cpp
EXAMPLE_SRS3=vectorMinMax/VectorMinMaxP.cpp vectorMinMax/VectorMinMaxS.cpp

SRCS=main.cpp $(FRAMEWORK_SRS) $(EXAMPLE_SRS) $(EXAMPLE_SRS1) $(EXAMPLE_SRS2) $(EXAMPLE_SRS3)
OBJS=$(subst .cpp,.o,$(SRCS))

all: main

main: $(OBJS)
	$(CXX) $(LDFLAGS) -o main $(OBJS) 

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) *~ .dependtool

include .depend
