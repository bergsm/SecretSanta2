/********************************************************************* 
** Author: Shawn Berg
** Date: 12/17/17
** Description: This class contains all of the people in the drawing
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
	//delete removePerson;
}

void People::assign(Person* picker, Hat* hat)
{
	setSeed();
	Person* SecretSanta;


	int randomPick = randInt(0, hat->getSize()-1);
	bool SSpicked = false;

	while (SSpicked == false)
	{
		SecretSanta = hat->getNames()[randomPick];
		if (SecretSanta->getName() != picker->getName())
		{
			picker->setSecretSanta(SecretSanta);
			hat->remove(SecretSanta);
			SSpicked = true;
		}
		else
			randomPick = randInt(0, hat->getSize()-1);
	}

}