/*Include source files*/
#include "login_page.cpp"
#include "admin_page.cpp"
#include "doctor_page.cpp"


int main()
{
  
    int* scene = new int(2); 

    RenderWindow window(VideoMode(1600, 900), "HMS");
    window.setVerticalSyncEnabled(true);

    Admin admin;
Doctor doctor("sushma " , 2);

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