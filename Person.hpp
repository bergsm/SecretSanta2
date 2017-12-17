/********************************************************************* 
** Author: Shawn Berg
** Date: 12/9/17
** Description:
*********************************************************************/

#ifndef SECRETSANTA_PERSON_HPP
#define SECRETSANTA_PERSON_HPP

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person
{
private:
	// Member Variables
	string name;
	string email;
	vector <Person> exclusions;
	Person* secretSanta;


public:
	// Overload Constructor
	Person(string);

	// Default Constructor
	Person();

	// Destructor
	~Person();

	// Getters
	string getName();
	string getEmail();
	Person* getSS();

	// Setters
	void setName(string);
	void setEmail(string);
	void setSecretSanta(Person*);

	// Methods




};

#endif //SECRETSANTA_PERSON_HPP
