#include "receptionist.h"

Receptionist::Receptionist()
{

}

Receptionist::Receptionist(string pname, string dname , int time)
{
	setPName(pname);
	setDName(dname);
	setTime(time);
}

string Receptionist::getPName() {
	return P_name;
}
string Receptionist::getDName() {
	return D_name;
;
}
string Receptionist::getTime() {
	return Time;
}

void Receptionist::setPName(string pname) {
	P_name = pname;
}
void Receptionist::setDName(string dname) {
	D_name = dname;
}
void Receptionist::setTime(int time) {
	Time = time;
}
void Receptionist::setID(int id) {
	_id = "Rep-" + to_string(id);
}