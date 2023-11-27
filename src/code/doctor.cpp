#include "doctor.h"

/* Constructors */

Doctor::Doctor()
{

}

Doctor::Doctor(string name, int id ,string specs)
{
	setName(name);
	setID(id);
	
	setSpecialization(specs);

}

/* Getter Functions */

string Doctor::getName(){
	return _name;
}

string Doctor::getID(){
	return _id;
}
string Doctor::getSpecialization(){
	return spec;
}
/* Setter Functions */

void Doctor::setName(string name){
	_name = name;
}

void Doctor::setID(int id){
	_id = "Dr-" + to_string(id);
}
void Doctor::setSpecialization(string specs)
{
	spec = specs;
}

void Doctor::setAvailabilty(int from, int to)
{
	availableFrom = from;
	availableTo = to;
}