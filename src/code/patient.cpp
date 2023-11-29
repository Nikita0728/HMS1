#include "patient.h"


Patient::Patient()
{

}
Patient::Patient(string appmnt , string rpt)
{
    setAppointment(appmnt);
    setReport(rpt);
}
Patient::setAppointment( string appmnt)
{
    appointment=appmnt;
}
Patient::setReport( string rpt)
{
    report=rpt;
}

Patient::getAppointment(){
    return appointment;
}
Patient::getReport()
{
    return report;
}