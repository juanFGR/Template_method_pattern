#include <iostream>
#include <string>
#include <list>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/XmlOutputter.h>
#include <netinet/in.h>

#include <stdio.h>
#include <stdlib.h>
#include"../framework/Framework.h"
#include"../fibonacci/FibonacciP.h"
#include"../fibonacci/FibonacciS.h"
#include"../mergeSort/MergeSortP.h"
#include"../mergeSort/MergeSortS.h"
#include"../vectorMinMax/VectorMinMaxP.h"
#include"../vectorMinMax/VectorMinMaxS.h"

using namespace CppUnit;
using namespace std;

//-------------

class UnitTestCase : public CppUnit::TestFixture
{
    CPPUNIT_TEST_SUITE(UnitTestCase);
    CPPUNIT_TEST(testFibonacci);
    CPPUNIT_TEST(testMaxMin);
    CPPUNIT_TEST(testMergeSort);
    CPPUNIT_TEST_SUITE_END();
 
public:

    void setUp(void);

    void tearDown(void);

 

protected:
    void testFibonacci(void);
    void testMaxMin(void);
     void testMergeSort(void);
    int fib(int );
private:
    
	Problema* problema;
	Solucion* solucion;
	Framework* framework;
};