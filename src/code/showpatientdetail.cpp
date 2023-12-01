#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "showpateient.cpp"


using namespace std;
using namespace sf;



inline void runPatientdetail(int * scene, patientlist * list, RenderWindow * window )
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
bedno("Bed NO.", font , 50),
namefirst(list->getPatient_name(), font , 50),
diseasefirst(list->getdisease_name(), font , 50),
bednofirst(list->getbedno(), font , 50),
name2nd(list->getPatient_name(), font , 50),
disease2nd(list->getdisease_name(), font , 50),
bedno2nd(list->getbedno(), font , 50),
name3rd(list->getPatient_name(), font , 50),
disease3rd(list->getdisease_name(), font , 50),
bedno3rd(list->getbedno(), font , 50),
Log_out("Go Back", font , 30);
Log_out.setPosition(Vector2f(1400,50));

Log_out.setFillColor(sf::Color::Blue);



name.setPosition(Vector2f(100,70));
disease.setPosition(Vector2f(700, 70));
bedno.setPosition(Vector2f(1200 ,70));
namefirst.setPosition(Vector2f(100,300));
diseasefirst.setPosition(Vector2f(700 ,300));
bednofirst.setPosition(Vector2f(1200 ,300));

name2nd.setPosition(Vector2f(100,500));
disease2nd.setPosition(Vector2f(700 ,500));
bedno2nd.setPosition(Vector2f(1200 ,500));

name3rd.setPosition(Vector2f(100,700));
disease3rd.setPosition(Vector2f(700 ,700));
bedno3rd.setPosition(Vector2f(1200 ,700));

name.setFillColor(sf::Color::Magenta);
disease.setFillColor(sf::Color::Magenta);
bedno.setFillColor(sf::Color::Magenta);
namefirst.setFillColor(sf::Color::Black);
diseasefirst.setFillColor(sf::Color::Black);
bednofirst.setFillColor(sf::Color::Black);
name2nd.setFillColor(sf::Color::Black);
disease2nd.setFillColor(sf::Color::Black);
bedno2nd.setFillColor(sf::Color::Black);
name3rd.setFillColor(sf::Color::Black);
disease3rd.setFillColor(sf::Color::Black);
bedno3rd.setFillColor(sf::Color::Black);

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
        if (event.type == Event::MouseButtonPressed)
			{if (Log_out.getGlobalBounds().contains(Mouse::getPosition(*window).x, Mouse::getPosition(*window).y))
				{
					*scene =5;
					return;
					cout<<"logoutpressed";
				}}
        window->draw(background);
        window->draw(name);
        window->draw(disease);
        window->draw(bedno);
         window->draw(namefirst);
          window->draw(diseasefirst);
           window->draw(bednofirst);
         window->draw(name2nd);
          window->draw(disease2nd);
           window->draw(bedno2nd);
           
            window->draw(name3rd);
          window->draw(disease3rd);
           window->draw(bedno3rd);
           window->draw(Log_out);
        window->display();
}}