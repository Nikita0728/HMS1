#ifndef PATIENT_H
#define PATIENT_H

#include <String>
using namespace std;

class Patient
{
    private:
    string  appointment, report;
    public:
    Patient();
    Patient(string , string);
    string getAppointment();
    string getReport();

void setAppointment( string);
    void setReport(string);
};

#endif