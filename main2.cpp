/********************************************************************* 
** Author: Shawn Berg
** Date: 12/9/17
** Description:
*********************************************************************/

#include <iostream>
#include "Hat.hpp"
#include "Person.hpp"
#include "menu.hpp"

using namespace std;

int main()
{
	//vector <Person*> people;

	Hat hat;

	string input;

	bool quit = false;

	do switch(menu1())
		{
			case 1: // add person to drawing
				cout << "Enter name of the person" << endl;

				cin >> input;

				Person* temp = new Person(input);
				hat.add(temp);

			case 2: // remove person
				for (int i=0; i<hat.getSize(); i++)
				{
					cout << hat.getNames()[i]->getName() << endl;
				}

				cout << endl << "Enter the name of the person to remove" << endl;
				cin >> input;

				for (int i=0; i<hat.getSize(); i++)
				{
					if (input == hat.getNames()[i]->getName())
						hat.remove(hat.getNames()[i]);
				}

			case 3: //assign and print secret santas
				for (int i=0; i<hat.getSize(); i++)
				{
					hat.assign(hat.getNames()[i]);
				}

				for (int i=0; i<hat.getSize(); i++)
				{
					cout << hat.getNames()[i]->getSS()->getName() << " is";
					cout << " secret Santa for " << hat.getNames()[i]->getName();
					cout << "!" << endl;
				}

			case 4: // quit
				quit = true;

		}
	while (quit == false);

	// TODO create menu for adding people, assigning SS's, editing info, etc.
	/*while (quit == false)
	{
		cout << "Enter name of the person" << endl;

		cin >> input;

		if (input == "quit")
			quit = true;
		else
		{

			Person* temp = new Person(input);
			hat.add(temp);
		}
	}

	for (int i=0; i<hat.getSize(); i++)
	{
		cout << hat.getNames()[i]->getName() << endl;
	}

	cout << "Delete?" << endl;

	cin >> input;

	if(input == "y")
	{
		int hatSize = hat.getSize();
		for (int i=0; i<hatSize; i++)
		{
			hat.remove(hat.draw());
		}
	}

	cout << "Deleted" << endl;*/

	return 0;
}
