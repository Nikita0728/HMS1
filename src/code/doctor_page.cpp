#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "doctor.h"

using namespace std;
using namespace sf;

inline void runDoctorPage(int* scene, Doctor* doctor, RenderWindow* window)
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
	if (!backgroundTexture.loadFromFile("src/Assets/Backgrounds/HMS-Doctor_Screen.jpg"))
	{
		cout << "Error loading background image\n";
		*scene = -1;
		return;
	}
    	Text Prescribe_MedicineText("Prescribe Medicine", font, 60),
		Check_ReportsText("Check Reports", font, 60),
		Draw_SalaryText("Draw Salary", font, 60),
	Doctor_name(doctor->getName(), font, 60),
Doctor_id(doctor->getID(), font, 60),
Doctor_specialization(doctor->getSpecialization() , font ,60),
Doctor_department(doctor->getDepartment(), font ,60);

	Prescribe_MedicineText.setPosition(Vector2f(900, 200));
	Check_ReportsText.setPosition(Vector2f(900, 500));
	Draw_SalaryText.setPosition(Vector2f(900, 800));
Doctor_name.setPosition(Vector2f(400,220));
Doctor_id.setPosition(Vector2f(300, 340));
Doctor_specialization.setPosition(Vector2f(400 ,450));
Doctor_department.setPosition(Vector2f(370 ,580));

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
				if (Prescribe_MedicineText.getGlobalBounds().contains(Mouse::getPosition(*window).x, Mouse::getPosition(*window).y))
				{
					cout << "Prescribed pressed!\n";
				}
				if (Check_ReportsText.getGlobalBounds().contains(Mouse::getPosition(*window).x, Mouse::getPosition(*window).y))
				{
					cout << " Check Reports button pressed!\n";
				}
				if (Draw_SalaryText.getGlobalBounds().contains(Mouse::getPosition(*window).x, Mouse::getPosition(*window).y))
				{
					cout << "Draw Salary button pressed!\n";
				}
			}
            window->clear(Color::White);

		window->draw(background);

		window->draw(Prescribe_MedicineText);
		window->draw(Check_ReportsText);
		window->draw(Draw_SalaryText);
	window->draw(Doctor_name);
	window->draw(Doctor_id);
	window->draw(Doctor_specialization);
	window->draw(Doctor_department);
		window->display();
		}
}}