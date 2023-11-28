



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
	if (!backgroundTexture.loadFromFile("src/Assets/Backgrounds/reception.png"))
	{
		cout << "Error loading background image\n";
		*scene = -1;
		return;
	}
    	Text Patients_list("Patient list", font, 60),
		Appointment_with("Appointment with", font, 60),
		Time("Time", font, 60),
		Patient_list_first(Receptionist->getPName() , font ,50),
		Doctor_list_1(Receptionist->getDName(), font ,50),
		Time_list_1( to_string( Receptionist->getTime()),font, 50),
		Log_out("Log out", font , 30),

		//list 2
		Patient_list_2(Receptionist->getPName() , font ,50),
		Doctor_list_2(Receptionist->getDName(), font ,50),
		Time_list_2( to_string( Receptionist->getTime()),font, 50),
	//list 3
	Patient_list_3(Receptionist->getPName() , font ,50),
		Doctor_list_3(Receptionist->getDName(), font ,50),
		Time_list_3( to_string( Receptionist->getTime()),font, 50);
	
	Patients_list.setPosition(Vector2f(150, 140));
	Appointment_with.setPosition(Vector2f(490, 140));
	Time.setPosition(Vector2f(1200, 140));
	Patient_list_first.setPosition(Vector2f(100, 300));
	Doctor_list_1.setPosition(Vector2f(500, 300));
	Time_list_1.setPosition(Vector2f(1200, 300));
	Log_out.setPosition(Vector2f(1400,50));

Log_out.setFillColor(sf::Color::Blue);
//list 2
Patient_list_2.setPosition(Vector2f(100, 500));
	Doctor_list_2.setPosition(Vector2f(500, 500));
	Time_list_2.setPosition(Vector2f(1200, 500));
//list 3
Patient_list_3.setPosition(Vector2f(100, 700));
	Doctor_list_3.setPosition(Vector2f(500, 700));
	Time_list_3.setPosition(Vector2f(1200, 700));

	Patients_list.setFillColor(sf::Color::Magenta),
	Appointment_with.setFillColor(sf::Color::Magenta),
	Time.setFillColor(sf::Color::Magenta),
	Patient_list_first.setFillColor(sf::Color::Black),
		Doctor_list_1.setFillColor(sf::Color::Black),
			Time_list_1.setFillColor(sf::Color::Black);
//list 2
Patient_list_2.setFillColor(sf::Color::Black),
		Doctor_list_2.setFillColor(sf::Color::Black),
			Time_list_2.setFillColor(sf::Color::Black);

			//list 3
			Patient_list_3.setFillColor(sf::Color::Black),
		Doctor_list_3.setFillColor(sf::Color::Black),
			Time_list_3.setFillColor(sf::Color::Black);

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
			{if (Log_out.getGlobalBounds().contains(Mouse::getPosition(*window).x, Mouse::getPosition(*window).y))
				{
					*scene =0;
					return;
					cout<<"logoutpressed";
				}}
            window->clear(Color::Blue);

		window->draw(background);

		window->draw(Patients_list);
		window->draw(Appointment_with);
		window->draw(Time);
	window->draw(Patient_list_first);
	window->draw(Doctor_list_1);
	window->draw(Time_list_1);
	window->draw(Patient_list_2);
	window->draw(Doctor_list_2);
	window->draw(Time_list_2);
	window->draw(Patient_list_3);
	window->draw(Doctor_list_3);
	window->draw(Time_list_3);
	window->draw(Log_out);
		window->display();
		}
}}