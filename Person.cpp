#include <iostream>
#include "Person.c"

Person::Person(string fN, string lN)
{
  firstName=fN;
  lastName=lN;
}

 void Person::operator<<()
{
  cout<<firstName << " "<< lastName <<endl; 
}

string Person::getName()
{
	return string;
}

