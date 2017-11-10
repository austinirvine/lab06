/*
**Author: Austin Irvine
**File N: TestSuite.cpp
**Date P: November 7, 2017
**Purpose: Run numerous unit tests on a linkedlist class
*/

#include "TestSuite.h"

TestSuite::TestSuite()
{
	//initialized
}

void TestSuite::TestIsEmpty(int testN, LinkedListOfInts intList, int x)
{
	if(x == 0)
	{
		std::cout<<"Test "<<testN<<": List Should Be Empty: ";
		if(intList.isEmpty())
		{
			std::cout<<"Passed\n";
			return;
		}
	}
	else
	{
		std::cout<<"Test "<<testN<<": List Should Have Many Values: ";
		if(!intList.isEmpty())
		{
			std::cout<<"Passed\n";
			return;
		}
	}
	std::cout<<"Failed\n";
}
void TestSuite::TestSize(int testN, LinkedListOfInts intList, int x)
{
	if(x == 0)
	{
		std::cout<<"Test "<<testN<<": List Size Is Empty: ";
		if(intList.size() == 0)
		{
			std::cout<<"Passed\n";
			return;
		}
	}
	else
	{
		std::cout<<"Test "<<testN<<": List Size Should Be "<<x<<": ";
		if(intList.size() == x)
		{
			std::cout<<"Passed\n";
			return;
		}
	}
	std::cout<<"Failed\n";
}
void TestSuite::TestSearch(int testN, LinkedListOfInts intList, int x, bool returnValue)
{
	std::cout<<"Test "<<testN<<": "<<x<<" Value's Existence Should Return "<<returnValue<<": ";

	if(returnValue && intList.search(x))
	{
		std::cout<<"Passed\n";
		return;
	}
	else if(!returnValue && !intList.search(x))
	{
		std::cout<<"Passed\n";
		return;
	}
	std::cout<<"Failed\n";
}
void TestSuite::TestAddBack(int testN, LinkedListOfInts intList, int x, bool removal)
{
	std::cout<<"Test "<<testN<<": "<<x<<" Should Be At Back: ";

	int sizeOfList = 0;
	std::vector<int> oldVector;

	sizeOfList = intList.size();
	oldVector = intList.toVector();

	if(!removal && oldVector[sizeOfList-1] == x)
	{
		std::cout<<"Passed\n";
		return;
	}
	else if(removal && oldVector[sizeOfList-1] != x)
	{
		std::cout<<"Passed\n";
		return;
	}
	std::cout<<"Failed\n";
}
void TestSuite::TestAddFront(int testN, LinkedListOfInts intList, int x, bool removal)
{
	std::cout<<"Test "<<testN<<": "<<x<<" Should Be At Front: ";

	std::vector<int> oldVector;
	oldVector = intList.toVector();

	if(!removal && oldVector[0] == x)
	{
		std::cout<<"Passed\n";
		return;
	}
	else if(removal && oldVector[0] != x)
	{
		std::cout<<"Passed\n";
		return;
	}
	std::cout<<"Failed\n";
}
void TestSuite::TestRemoveBack(int testN, int testN2, LinkedListOfInts intList)
{
	int startSize = 0;
	int endSize = 0;
	std::vector<int> oldVector;

	startSize = intList.size();
	oldVector = intList.toVector();
	bool halfTest = intList.removeBack();
	std::cout<<"Test "<<testN<<": removeBack Returned True:";
	if(halfTest)
	{
		std::cout<<"Passed\n";
		endSize = intList.size();

		std::cout<<"Test "<<testN<<".5: List Size Should Change For removeBack:";
		if(startSize != endSize)
		{
			std::cout<<"Passed\n";
			TestAddBack(testN2, intList, oldVector[startSize-1], true);
		}
		else{std::cout<<"Failed\n";	}
	}
	else{std::cout<<"Failed\n";	}
}
void TestSuite::TestRemoveFront(int testN, int testN2, LinkedListOfInts intList)
{
	int startSize = 0;
	int endSize = 0;
	std::vector<int> oldVector;

	startSize = intList.size();
	oldVector = intList.toVector();
	bool halfTest = intList.removeFront();
	std::cout<<"Test "<<testN<<": removeFront Returned True:";
	if(halfTest)
	{
		std::cout<<"Passed\n";
		endSize = intList.size();

		std::cout<<"Test "<<testN<<".5: List Size Should Change For removeFront:";
		if(startSize != endSize)
		{
			std::cout<<"Passed\n";
			TestAddFront(testN2, intList, oldVector[0], true);
		}
		else{std::cout<<"Failed\n";	}

	}
	else{std::cout<<"Failed\n";	}
}

void TestSuite::TestRemoveEmpty(std::string removal, double testN, LinkedListOfInts intList)
{
	bool halfTest;

	if(removal == "back"){
		halfTest = intList.removeBack();
		std::cout<<"Test "<<testN<<": removeBack Returned False:";
	}
	else{
		halfTest = intList.removeFront();
		std::cout<<"Test "<<testN<<": removeFront Returned False:";
	}

	if(!halfTest)
	{
		std::cout<<"Passed\n";
	}
	else{std::cout<<"Failed\n";	}
}
