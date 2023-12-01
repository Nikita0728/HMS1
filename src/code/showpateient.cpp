#include <iostream>
#include <string>
using namespace std;

class patientlist
{
    private:
     string patient_name, disease_name;
     int bed_no;

public:
patientlist(string name , string disease , int bedno)
{
    setPatinet_name(name);
    setdisease_name(disease);
    setbedno(bedno);
}
     void setPatinet_name(string name)
     {
        patient_name=name;
     }
     string getPatient_name()
     {
        return patient_name;
     }
 void setdisease_name(string disease)
     {
        disease_name=disease;
     }
     string getdisease_name()
     {
        return disease_name;
     }
      void setbedno(int bedno)
     {
        bed_no=bedno;
     }
     string getbedno()
     {
        return  to_string( bed_no);
     }

};