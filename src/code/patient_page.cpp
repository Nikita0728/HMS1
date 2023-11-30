#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "patient.h"
#include "admin.h"
using namespace std;
using namespace sf;

inline void runPatientPage(int* scene , Patient* patient , RenderWindow* window)
{
	/* Loading the Inika font and if failed to do so close the program */

	Font font;
	if (!font.loadFromFile("src/Assets/Font/Inika/Inika-Bold.ttf"))
	{
		cout << "Error loading font" << endl;
		*scene = -1;
		return;
	}
    Texture backgroundTexture;
	if (!backgroundTexture.loadFromFile("src/Assets/Backgrounds/patient.png"))
	{
		cout << "Error loading background image\n";
		*scene = -1;
		return;
	}
Text appointment("Book Appointment", font , 45 ),
report("Check Reports", font ,45),
Log_out("Go Back", font , 30);

appointment.setPosition(Vector2f(300 ,500));
report.setPosition(Vector2f(1000 , 500));
Log_out.setPosition(Vector2f(1400,50));

appointment.setFillColor(sf::Color::White);
report.setFillColor(sf::Color::White);
Log_out.setFillColor(sf::Color::Blue);

   RectangleShape background(Vector2f(1600, 1050));
	background.setTexture(&backgroundTexture);
	background.setPosition(Vector2f(0, 0));

     while (window->isOpen())
	{
		Event event;
		while (window->pollEvent(event))
		{
			if (event.type == Event::Closed)
			{
				*scene = -1;
				window->close();
			}

if (event.type == Event::MouseButtonPressed)
            {
				if (appointment.getGlobalBounds().contains(Mouse::getPosition(*window).x, Mouse::getPosition(*window).y))
				{
					cout << "Appointment button pressed!\n";
				}
				if (report.getGlobalBounds().contains(Mouse::getPosition(*window).x, Mouse::getPosition(*window).y))
				{
					cout << " Check Reports button pressed!\n";
				}
				if (Log_out.getGlobalBounds().contains(Mouse::getPosition(*window).x, Mouse::getPosition(*window).y))
				{
					*scene =0;
					return;
					cout<<"logoutpressed";
				}
               
                
                }
				 window->draw(background);
                window->draw(appointment);
                window->draw(report);
                	window->draw(Log_out);
                window->display();
				
        }
}

				}