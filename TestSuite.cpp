/*
**Author: Austin Irvine
**File N: TestSuite.cpp
**Date P: November 7, 2017
**Purpose: Run numerous unit tests on a linkedlist class
*/

#include <iostream>
#include "LinkedListOfInts.h"

class TestSuite: public
{
	public:
		TestSuite();
		
		void TestListCreation();
		void TestIsEmpty();
		void TestSize();
		void TestSearch();
		void TestAddBack();
		void TestAddFront();
		void TestRemoveBack();
		void TestRemoveFront();
		void TestDestruction();
		void TestVectorReturn();
		
		void TestPassed(std::string);
		void TestFailed(std::string);
};

TestSuite::TestSuite()
{
	//initialized
}

void TestListCreation()
{
}
void TestIsEmpty()
{
}
void TestSize()
{
}
void TestSearch()
{
}
void TestAddBack()
{
}
void TestAddFront()
{
}
void TestRemoveBack()
{
}
void TestRemoveFront()
{
}
void TestDestruction()
{
}
void TestVectorReturn()
{
}

void TestSuite::TestPassed(std::string test)
{
	std::cout<<"The test, "<<test<<", has Passed.\n";
}
void TestSuite::TestFailed(std::string test)
{
	std::cout<<"The test, "<<test<<", has Failed.\n";
}