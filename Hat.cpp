/********************************************************************* 
** Author: Shawn Berg
** Date: 12/9/17
** Description: This code serves as the "hat" which people will draw names out
 * of.
*********************************************************************/

#include <iostream>
#include "Hat.hpp"

using namespace std;

Hat::Hat()
{}

Hat::~Hat()
{}

int Hat::getSize()
{
	return names.size();
}

vector <Person*> Hat::getNames()
{
	return names;
}

void Hat::assign(Person* picker)
{
	setSeed();
	Person* SecretSanta;

	for (int i=0; i<names.size(); i++)
	{
		int randomPick = randInt(0, names.size()-1);
		bool SSpicked = false;

		while (SSpicked == false)
		{
			SecretSanta = names[randomPick];
			if (SecretSanta->getName() != picker->getName())
			{
				picker->setSecretSanta(SecretSanta);
				remove(SecretSanta);
				SSpicked = true;
			}
			else
				randomPick = randInt(0, names.size()-1);
		}
	}
}

Person* Hat::draw()
{
	setSeed();

	int randomPick = randInt(0, names.size()-1);

	return names[randomPick];
}

void Hat::add(Person* newName)
{
	names.push_back(newName);
}

void Hat::remove(Person* removePerson)
{
	int numNames = names.size();
	for (int i=0; i<numNames; i++)
	{
		if (names[i] == removePerson)
			names.erase(names.begin() + i);
	}
	//delete removePerson;
}