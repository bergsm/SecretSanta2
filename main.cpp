/********************************************************************* 
** Author: Shawn Berg
** Date: 12/4/17
** Description:
*********************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include "random.hpp"

using namespace std;

struct Person
{
	string name;
	string SSname;
};

int main()
{

	setSeed();

	vector<Person> list;
	vector<Person> hat;
	Person SecretSanta;
	bool SSpicked;

	Person Michele;
	Michele.name = "Michele";

	Person Shawn;
	Shawn.name = "Shawn";

	Person Steve;
	Steve.name = "Steve";

	Person Mary;
	Mary.name = "Mary";

	Person Larry;
	Larry.name = "Larry";

	list.push_back(Michele);
	list.push_back(Shawn);
	list.push_back(Steve);
	list.push_back(Mary);
	list.push_back(Larry);

	hat.push_back(Michele);
	hat.push_back(Shawn);
	hat.push_back(Steve);
	hat.push_back(Mary);
	hat.push_back(Larry);



	for (int i=0; i<list.size(); i++)
	{
		SSpicked = false;
		int randomPick = randInt(0, hat.size()-1);


		while (SSpicked == false)
		{
			SecretSanta = hat[randomPick];
			if (SecretSanta.name != list[i].name)
			{
				list[i].SSname = SecretSanta.name;
				hat.erase(hat.begin() + randomPick);
				SSpicked = true;
			}
			else
				randomPick = randInt(0, hat.size()-1);

		}
	}

	for (int i=0; i<list.size(); i++)
	{
		cout << list[i].SSname << " is secret Santa for " << list[i].name << endl;
	}

	return 0;
}
