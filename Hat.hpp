/********************************************************************* 
** Author: Shawn Berg
** Date: 12/9/17
** Description:
*********************************************************************/

#ifndef SECRETSANTA_HAT_HPP
#define SECRETSANTA_HAT_HPP

#include <iostream>
#include "Person.hpp"
#include "Hat.hpp"
#include "random.hpp"

using namespace std;

class Hat
{
private:
	// Member Variables
	vector <Person*> names;

public:
	// Overload Constructor
	Hat();

	// Default Constructor


	// Destructor
	~Hat();

	// Getters
	int getSize();
	vector <Person*> getNames();

	// Setters


	// Methods
	void assign(Person*);
	Person* draw();
	void add(Person*);
	void remove(Person*);

};

#endif //SECRETSANTA_HAT_HPP
