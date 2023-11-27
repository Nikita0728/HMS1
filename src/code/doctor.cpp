#include "doctor.h"

/* Constructors */

Doctor::Doctor()
{

}

Doctor::Doctor(string name, int id ,string specs, string depart)
{
	setName(name);
	setID(id);
	
	setSpecialization(specs);
setDepartment(depart);
}

/* Getter Functions */

string Doctor::getName(){
	return _name;
}

string Doctor::getID(){
	return _id;
}
string Doctor::getSpecialization(){
	return _spec;
}
string Doctor::getDepartment()
{
	return _depart;
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
	_spec = specs;
}
void Doctor::setDepartment(string depart)
{
	_depart = depart;
}

void Doctor::setAvailabilty(int from, int to)
{
	availableFrom = from;
	availableTo = to;
}