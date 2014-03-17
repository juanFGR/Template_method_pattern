#include"UnitTestCase.h"



int UnitTestCase::fib(int x) {
 if (x == 0)
        return 0;

    if (x == 1)
        return 1;

    return fib(x-1)+fib(x-2);
    
}

//-----------------------------------------------------------------------------

void UnitTestCase::testFibonacci(void)
{
  
	problema = new FibonacciP(atoi("5"));
	solucion = new FibonacciS();
	framework = new Framework();
	framework->divideyVenceras(problema, solucion);
        CPPUNIT_ASSERT(solucion->resolver() =="8");
}
 
void UnitTestCase::testMaxMin(void)
{
  vector<int> first; 
first.push_back(3);first.push_back(9);
first.push_back(8);first.push_back(1);
first.push_back(6);first.push_back(3);
first.push_back(9);first.push_back(8);
first.push_back(1);first.push_back(9);
first.push_back(50);first.push_back(6);
first.push_back(3);first.push_back(9);
first.push_back(8);first.push_back(1);
first.push_back(4);first.push_back(3);
first.push_back(2);first.push_back(15);

        problema = new VectorMinMaxP(first);
	solucion = new VectorMinMaxS();
	framework = new Framework();
	framework->divideyVenceras(problema, solucion);
    CPPUNIT_ASSERT(solucion->resolver() == "  Valor Minimo 1  Valor Maximo 50");

}

void UnitTestCase::testMergeSort(void)
{
  vector<int> first; 
first.push_back(3);first.push_back(9);
first.push_back(8);first.push_back(1);
first.push_back(6);first.push_back(3);
first.push_back(9);first.push_back(8);
first.push_back(1);first.push_back(9);
first.push_back(50);first.push_back(6);
first.push_back(3);first.push_back(9);
first.push_back(8);first.push_back(1);
first.push_back(4);first.push_back(3);
first.push_back(2);first.push_back(15);

  problema = new MergeSortP(first);
  solucion = new MergeSortS();
 framework = new Framework();

	framework->divideyVenceras(problema, solucion);
    CPPUNIT_ASSERT(solucion->resolver() == "1 1 1 2 3 3 3 3 4 6 6 8 8 8 9 9 9 9 15 50 ");

}
 
void UnitTestCase::setUp(void)

{
}


void UnitTestCase::tearDown(void)

{

  delete framework;
  delete solucion;
  delete problema;
}

//-----------------------------------------------------------------------------

CPPUNIT_TEST_SUITE_REGISTRATION( UnitTestCase );

int main(int argc, char* argv[])
{
  CPPUNIT_NS::TestResult testresult;
    // register listener for collecting the test-results

    CPPUNIT_NS::TestResultCollector collectedresults;

    testresult.addListener (&collectedresults);


    // register listener for per-test progress output

    CPPUNIT_NS::BriefTestProgressListener progress;

    testresult.addListener (&progress);

    // insert test-suite at test-runner by registry

    CPPUNIT_NS::TestRunner testrunner;
    testrunner.addTest (CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest ());

    testrunner.run(testresult);

 
    // output results in compiler-format

    CPPUNIT_NS::CompilerOutputter compileroutputter(&collectedresults, std::cerr);

    compileroutputter.write ();

    // Output XML for Jenkins CPPunit plugin

    ofstream xmlFileOut("cppUnitTest.xml");

    XmlOutputter xmlOut(&collectedresults, xmlFileOut);

    xmlOut.write();

    // return 0 if tests were successful

    return collectedresults.wasSuccessful() ? 0 : 1;



}
