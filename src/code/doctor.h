#ifndef DOCTOR_H
#define DOCTOR_H

#include <String>
using namespace std;

class Doctor
{
private:
	string _name, _id, _spec, _depart;
	int availableFrom, availableTo;

public:
	/* Constructors */
	Doctor();
	Doctor(string, int, string, string);

	/* Getter Functions */
	string getName();

	string getID();
	string getSpecialization();
	string getDepartment();

	/* Setter Functions */
	void setName(string);
	void setID(int);
	void setSpecialization(string);
	void setDepartment(string);
	void setAvailabilty(int, int);
};

#endif