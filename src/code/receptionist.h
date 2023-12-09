#ifndef RECEPTIONIST_H
#define RECEPTIONIST_H

#include <String>
using namespace std;

class Receptionist
{
private:
	string P_name, D_name;
	int Time;

public:
	/* Constructors */
	Receptionist();
	Receptionist(string pname, string dname, int time);

	/* Getter Functions */
	string getPName();
	string getDName();
	int getTime();
	string getID();

	/* Setter Functions */
	void setPName(string);
	void setDName(string);
	void setTime(int);

	// void setID(int);
};

#endif // !RECEPTIONIST.H