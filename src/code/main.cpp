/*Include source files*/
#include "login_page.cpp"
#include "admin_page.cpp"
#include "doctor_page.cpp"
#include "receptionist_page.cpp"
#include "nurse_page.cpp"
#include "patient_page.cpp"
#include "patient.cpp"
#include "showpatientdetail.cpp"

int main()
{

    int *scene = new int(0);

    RenderWindow window(VideoMode(1600, 900), "HMS");
    window.setVerticalSyncEnabled(true);

    Admin admin;
    Doctor doctor("Adam Smith ", 2, "Neuro", "Surgical ward");
    Receptionist receptionist("Xyz", "DR.lijan stha", 10);
    Patient patient("lijan ", "reportt");
    Nurse nurse("Diya", 1001);
    patientlist list("xyz ", "ayx", 1);
    while (*scene != -1)
    {
        switch (*scene)
        {
        case 0: // Login page
            runLoginScreen(scene, &admin, &window);
            window.clear();
            break;
        case 1:
            runAdminPage(scene, &admin, &window);
            window.clear();
            break;
        case 2:
            runDoctorPage(scene, &doctor, &window);
            window.clear();
            break;
        case 3:
            runReceptionistPage(scene, &receptionist, &window);
            window.clear();
            break;
        case 4:
            runPatientPage(scene, &patient, &window);
            window.clear();
            break;
        case 5:
            runNursePage(scene, &nurse, &window);
            window.clear();
            break;
        case 6:
            runPatientdetail(scene, &list, &window);
            window.clear();
            break;

            /*
              .
              .
              .
              .
            */
        }
    }

    cout << "Thank you & bye!!";

    return 0;
}