/********************************************************************* 
** Author: Shawn Berg
** Date: 12/9/17
** Description:
*********************************************************************/

#include <iostream>
#include "Hat.hpp"
#include "menu.hpp"
#include "People.hpp"

using namespace std;

int main()
{
	People OGpeople;
	People* people = &OGpeople;
	Hat OGhat; //TODO initializing and using hat with a pointer
	Hat* hat = &OGhat;
	string input;
	bool quit = false;
	Person* temp;

	// TODO create menu for adding emails, exclusions, etc.

	do switch(menu1())
		{
			case 1: // add person to drawing
				cout << "Enter name of the person" << endl;

				cin >> input;

				temp = new Person(input);
				people->add(temp);
				hat->add(temp);
				break;

			case 2: // remove person
				for (int i=0; i<hat->getSize(); i++)
				{
					cout << hat->getNames()[i]->getName() << endl;
				}

				cout << endl << "Enter the name of the person to remove" << endl;
				cin >> input;

				for (int i=0; i<hat->getSize(); i++)
				{
					if (input == hat->getNames()[i]->getName())
						hat->remove(hat->getNames()[i]);
						people->remove(hat->getNames()[i]);
				}
				break;

			case 3: //assign and print secret santas
				for (int i=0; i<people->getSize(); i++)
				{
					people->assign(people->getNames()[i], hat);
				}


				for (int i=0; i<people->getSize(); i++)
				{
					cout << people->getNames()[i]->getSS()->getName() << " is";
					cout << " secret Santa for " << people->getNames()[i]->getName();
					cout << "!" << endl;
				}
				return 0;

			case 4: // quit
				quit = true;
				break;

		}
	while (quit == false);

	return 0;
}
