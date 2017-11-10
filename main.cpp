/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include <vector>
#include "TestSuite.h"
#include "LinkedListOfInts.h"

int main(int argc, char** argv)
{
	LinkedListOfInts testList;
	TestSuite tS;

	/*
	*********************PHASE-1**********************
	*******************Empty List********************
	*/
	tS.TestIsEmpty(0, testList, 0); //test 0
	tS.TestSize(1, testList, 0); //test 1
	tS.TestRemoveEmpty("back", 1.5, testList);
	tS.TestRemoveEmpty("front", 1.6, testList);
	/*
	*********************PHASE-2**********************
	****************List Adding Front*****************
	*/
	testList.addFront(1);
	testList.addFront(2);
	testList.addFront(3);
	tS.TestIsEmpty(2, testList, 3); //test 2
	tS.TestSize(3, testList, 3); //test 3
	tS.TestAddFront(4, testList, 3, false); //test 4 - value 3 at front
	tS.TestSearch(5, testList, 2, true); //test 5 - search for value 2
	tS.TestSearch(6, testList, 8, false); //test 6 - search for value 8
	/*
	*********************PHASE-3**********************
	*************List Add Front & Back****************
	*/
	testList.addBack(9);
	tS.TestAddBack(7, testList, 9, false);
	tS.TestAddFront(8, testList, 3, false);
	testList.addFront(6);
	tS.TestAddBack(9, testList, 9, false);
	tS.TestAddFront(10, testList, 6, false);
	/*
	*********************PHASE-4**********************
	***************Remove Front & Back****************
	*/
	tS.TestRemoveBack(11, 12, testList);
	tS.TestRemoveFront(13, 14, testList);
	return (0);
}
