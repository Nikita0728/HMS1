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
    void getAppointment();
    void getReport();

    string setAppointment(string );
    string setReport(string);
};

#endif