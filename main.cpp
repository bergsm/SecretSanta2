/********************************************************************* 
** Author: Shawn Berg
** Date: 12/9/17
** Description: This code allows the user to create a list of people and assign
 * them secret Santas!
*********************************************************************/

#include <iostream>
#include "menu.hpp"
#include "People.hpp"

using namespace std;

int main()
{
	People OGpeople;
	People* people = &OGpeople;
	Hat OGhat;
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
				if (people->getSize() == 0)
					cout << "No one to remove." << endl;

				else
				{

					for (int i = 0; i < people->getSize(); i++)
					{
						cout << people->getNames()[i]->getName() << endl;
					}

					cout << endl << "Enter the name of the person to remove"
						 << endl;
					cin >> input;

					for (int i = 0; i < people->getSize(); i++)
					{
						if (input == people->getNames()[i]->getName())
						{
							hat->remove(hat->getNames()[i]);
							people->remove(people->getNames()[i]);
						}
					}
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
