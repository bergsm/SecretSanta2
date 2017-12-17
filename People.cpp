/********************************************************************* 
** Author: Shawn Berg
** Date: 12/17/17
** Description:
*********************************************************************/

#include <iostream>
#include "People.hpp"

using namespace std;

People::People()
{}

People::~People()
{}

int People::getSize()
{
	return names.size();
}

vector <Person*> People::getNames()
{
	return names;
}

void People::add(Person* newName)
{
	names.push_back(newName);
}

void People::remove(Person* removePerson)
{
	int numNames = names.size();
	for (int i=0; i<numNames; i++)
	{
		if (names[i] == removePerson)
			names.erase(names.begin() + i);
	}
	delete removePerson;
}
