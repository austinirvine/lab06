/*
**Author: Austin Irvine
**File N: TestSuite.h
**Date P: November 7, 2017
**Purpose: Run numerous unit tests on a linkedlist class
*/

#include <iostream>
#include <vector>
#include <string>
#include "LinkedListOfInts.h"

class TestSuite
{
	public:
		TestSuite();

		/** @passed - list returns empty
		*   @failed - list doesn't return empty when empty
		*   @values - test number, list, list size
		*/
		void TestIsEmpty(int,LinkedListOfInts,int);
		/** @passed - list size is correct
		*   @failed - list size is wrong
		*   @values - test number, list, list size
		*/
		void TestSize(int,LinkedListOfInts,int);
		/** @passed - known value searched for returns true
					and      unknown value returns false
		*   @failed - known value searched for returns false
					or      unknown value returns true
		*   @values - test number, list, value searched for
		*/
		void TestSearch(int,LinkedListOfInts,int,bool);
		/** @passed - expected value is at the back
		*   @failed - expected value is not at the back
		*   @values - test number, list, value removed, should return (false/true)
		*/
		void TestAddBack(int,LinkedListOfInts,int,bool);
		/** @passed - expected value is at the front
		*   @failed - expected value is not at the front
		*   @values - test number, list, value removed, should return (false/true)
		*/
		void TestAddFront(int,LinkedListOfInts,int,bool);
		/** @passed - value at the back of the list and vector removed
		*   @failed - returns false & value not removed
		*   @values - first test, second test, list
		*/
		void TestRemoveBack(int,int,LinkedListOfInts);
		/** @passed - value at front of list and vector is removed
		*   @failed - value not removed and same
		*   @values - first test, second test, list
		*/
		void TestRemoveFront(int,int,LinkedListOfInts);
		/** @passed - list is empty and returns false for removal
		*   @failed - list is empty but returns true for removal
		*   @values - type of removal, test number, list
		*/
		void TestRemoveEmpty(std::string,double,LinkedListOfInts);
};
