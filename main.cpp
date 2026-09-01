#include <iostream>
#include <string>
#include <vector>
#include "starter.h"

using namespace std;

int main()
{
	Starter_Object so1 {  };
	so1.val1(100);
	so1.val2(1);
	cout << "Here is my Work!! ************";
	cout << "val1: " << so1.val1() << '\n';
	cout << "val2: " << so1.val2() << '\n';

	so1.~Starter_Object();
	cout << "val1: " << so1.val1() << '\n';
	cout << "val2: " << so1.val2() << '\n';
	
	//create a few starter objects
	//add some values to test out your values methods
	//print out all the values for each object to validate your code
}
