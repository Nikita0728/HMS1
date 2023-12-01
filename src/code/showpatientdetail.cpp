#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>


using namespace std;
using namespace sf;


inline void runPatientdetail(int * scene, RenderWindow * window )
{
Font font;
    if (!font.loadFromFile("src/Assets/Font/Inika/Inika-Bold.ttf"))
    {
        cout << "Error loading font" << endl;
        *scene = -1;
        return;
    }
     Texture backgroundTexture;
    if (!backgroundTexture.loadFromFile("src/Assets/Backgrounds/reception.png"))
    {
        cout << "Error loading background image\n";
            *scene = -1;
            return;
    }
Text name("Patient Name" , font, 50),
disease("disease", font ,50),
bedno("Bed NO.", font , 50);

name.setPosition(Vector2f(100,70));
disease.setPosition(Vector2f(700, 70));
bedno.setPosition(Vector2f(1200 ,70));


name.setFillColor(sf::Color::Magenta);
disease.setFillColor(sf::Color::Magenta);
bedno.setFillColor(sf::Color::Magenta);

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
        }
        window->draw(background);
        window->draw(name);
        window->draw(disease);
        window->draw(bedno);
        window->display();
}}