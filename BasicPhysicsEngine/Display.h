#pragma once
#include "../packages/sfml-system.2.3.2.0/build/native/include/SFML/Graphics/RenderWindow.hpp"

#include "Constants.h"
#include "Object.h"




class Display
	{

	public:
		Display ( size_t windowXTemp, size_t windowYTemp, std::string title = "Window" )
			{
			windowX = windowXTemp;
			windowY = windowYTemp;

			init();
			}


	
		void drawObject ( FloatVector2d position )
			{
			sf::CircleShape materialPoint ( circleRadius );
			materialPoint.setPosition ( position.convertToSfVector() );
			materialPoint.setOrigin ( materialPoint.getRadius(), materialPoint.getRadius() );
			materialPoint.setFillColor ( materialPointColor );

			window->draw ( materialPoint );
			}

		void drawObject ( Object object )
			{
			float x = object.getPosition().x;
			float y = object.getPosition().y;

			drawObject ( FloatVector2d ( x, y ) );
			}

		sf::RenderWindow* getDisplayWindow()
			{
			return window;
			}

		void clear()
			{
			window->clear();
			}

		void display()
			{
			window->display();
			}


	private:
		size_t windowX = 0, windowY = 0;
		std::string title = "";

		sf::RenderWindow* window = nullptr;

		void init()
			{
			window = new sf::RenderWindow ( sf::VideoMode ( windowX, windowY ), title );
			}

	};
