/********************************************************************* 
** Author: Shawn Berg
** Date: 12/17/17
** Description:
*********************************************************************/

#ifndef SECRETSANTA_PEOPLE_HPP
#define SECRETSANTA_PEOPLE_HPP

#include <iostream>
#include "Person.hpp"
#include "Hat.hpp"

using namespace std;

class People
{
private:
	// Member Variables
	vector <Person*> names;

public:
	// Overload Constructor


	// Default Constructor
	People();

	// Destructor
	~People();

	// Getters
	int getSize();
	vector <Person*> getNames();


	// Setters


	// Methods
	void add(Person*);
	void remove(Person*);
	void assign(Person*, Hat*);

};

#endif //SECRETSANTA_PEOPLE_HPP
