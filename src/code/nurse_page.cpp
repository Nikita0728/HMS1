#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "nurse.h"
#include "admin.h"
using namespace std;
using namespace sf;

inline void runNursePage(int *scene, Nurse *nurse, RenderWindow *window)
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
	if (!backgroundTexture.loadFromFile("src/Assets/Backgrounds/nurse.png"))
	{
		cout << "Error loading background image\n";
		*scene = -1;
		return;
	}
	Text Patient_details("Patient details", font, 60),
		Shifts("Shifts", font, 60),
		Draw_SalaryText("Draw Salary", font, 60),
		Nurse_name(nurse->getName(), font, 60),
		Nurse_id(nurse->getID(), font, 56),

		Log_out("Go Back", font, 30);

	Patient_details.setPosition(Vector2f(900, 200));
	Shifts.setPosition(Vector2f(900, 500));
	Draw_SalaryText.setPosition(Vector2f(900, 800));
	Nurse_name.setPosition(Vector2f(550, 210));
	Nurse_id.setPosition(Vector2f(250, 400));
	Log_out.setPosition(Vector2f(1400, 50));

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
				if (Patient_details.getGlobalBounds().contains(Mouse::getPosition(*window).x, Mouse::getPosition(*window).y))
				{
					cout << "Patient details!\n";
					*scene = 6;
					return;
				}
				if (Shifts.getGlobalBounds().contains(Mouse::getPosition(*window).x, Mouse::getPosition(*window).y))
				{
					cout << " Shifts button pressed!\n";
				}
				if (Draw_SalaryText.getGlobalBounds().contains(Mouse::getPosition(*window).x, Mouse::getPosition(*window).y))
				{
					cout << "Draw Salary button pressed!\n";
				}
				if (Log_out.getGlobalBounds().contains(Mouse::getPosition(*window).x, Mouse::getPosition(*window).y))
				{
					*scene = 0;
					return;
					cout << "logoutpressed";
				}
			}
			window->clear(Color::White);

			window->draw(background);

			window->draw(Patient_details);
			window->draw(Shifts);
			window->draw(Draw_SalaryText);
			window->draw(Nurse_name);
			window->draw(Nurse_id);
			window->draw(Log_out);
			window->display();
		}
	}
}