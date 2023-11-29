#include "patient.h"


Patient::Patient()
{

}
Patient::Patient(string appmnt , string rpt)
{
    setAppointment(appmnt);
    setReport(rpt);
}
   string Patient::getAppointment()
   {
    return appointment;
   }
    string Patient::getReport(){
        return report;
    }

void Patient::setAppointment( string appmnt)
{
appointment =appmnt;
}
void Patient::setReport(string rpt)
    {
report=rpt;
    }