



#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "receptionist.h"


using namespace std;
using namespace sf;

inline void runReceptionistPage(int* scene, Receptionist* Receptionist, RenderWindow* window)
{
	/* Loading the Inika font and if failed to do so close the program */

	Font font;
	if (!font.loadFromFile("src/Assets/Font/Inika/Inika-Bold.ttf"))
	{
		cout << "Error loading font" << endl;
		*scene = -1;
		return;
	}



	/* Loading the background and if failed to do so close the program */
	Texture backgroundTexture;
	if (!backgroundTexture.loadFromFile("src/Assets/Backgrounds/HMS-Home_Screen.jpg"))
	{
		cout << "Error loading background image\n";
		*scene = -1;
		return;
	}
    	Text Patients_list("Patient list", font, 60),
		Appointment_with("Appointment with", font, 60),
		Time("Time", font, 60);
	

	Patients_list.setPosition(Vector2f(900, 200));
	Appointment_with.setPosition(Vector2f(900, 500));
	Time.setPosition(Vector2f(900, 800));

	Patients_list.setFillColor(sf::Color::Magenta);
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
            window->clear(Color::Blue);

		window->draw(background);

		window->draw(Patients_list);
		window->draw(Appointment_with);
		window->draw(Time);
	
		window->display();
		}
}}