#include "admin.h"

/* Doctor Functions */

bool Admin::findDoctorName(string name)
{
	int i;

	for (i = 0; i < _doctorDB.size(); i++)
	{
		if (_doctorDB[i].getName() == name)
			return true;
	}

	return false;
}

bool Admin::findDoctorID(string id)
{
	int i;

	for (i = 0; i < _doctorDB.size(); i++)
	{
		if (_doctorDB[i].getID() == id)
			return true;
	}

	return false;
}

void Admin::addDoctorToDB(string name, int id, string specs, string depart)
{
	Doctor newDoctor(name, id, specs, depart);
	_doctorDB.push_back(newDoctor);
}

/* Nurse Functions */

bool Admin::findNurseName(string name)
{
	int i;

	for (i = 0; i < _nurseDB.size(); i++)
	{
		if (_nurseDB[i].getName() == name)
			return true;
	}

	return false;
}

bool Admin::findNurseID(string id)
{
	int i;

	for (i = 0; i < _nurseDB.size(); i++)
	{
		if (_nurseDB[i].getID() == id)
			return true;
	}

	return false;
}

void Admin::addNurseToDB(string name, int id)
{
	Nurse newNurse(name, id);
	_nurseDB.push_back(newNurse);
}

/* Receptionest Functions */

bool Admin::findReceptionistName(string name)
{
	int i;
	for (i = 0; i < _receptionistDB.size(); i++)
	{
		if (_receptionistDB[i].getPName() == name)
			return true;
	}

	return false;
}
//  bool Admin::findReceptionistID(string id)
//  {
//  	int i;

//  	for (i = 0; i < _receptionistDB.size(); i++)
//  	{
//  		if (_receptionistDB[i].getID() == id)
//  			return true;
//  	}

//  	return false;
//  }

void Admin::addReceptionistToDB(string pname, string dname, int time)
{
	Receptionist newReceptionist(pname, dname, time);
	_receptionistDB.push_back(newReceptionist);
}