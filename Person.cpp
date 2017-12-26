/********************************************************************* 
** Author: Shawn Berg
** Date: 12/9/17
** Description: This code contains the variables of functions for each individual
 * person in the drawing.
*********************************************************************/

#include <iostream>
#include "Person.hpp"

using namespace std;

Person::Person(string newName)
{
	this->name = newName;
	this->email = "";
	this->secretSanta = NULL;
	//this->exclusions = NULL;
}

Person::~Person()
{}

string Person::getName()
{
	return name;
}

string Person::getEmail()
{
	return email;
}

Person* Person::getSS()
{
	return secretSanta;
}

void Person::setEmail(string newEmail)
{
	this->email = newEmail;
}

void Person::setName(string newName)
{
	this->name = newName;
}

void Person::setSecretSanta(Person* newSecretSanta)
{
	this->secretSanta = newSecretSanta;
}


