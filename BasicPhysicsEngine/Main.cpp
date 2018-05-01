#include <SFML/Graphics.hpp>


#include "Constants.h"
#include "Vector.h"
#include "Display.h"
#include "Object.h"

#define Vector <float> FloatVector2d;


int main ()
	{
	sf::RenderWindow window ( sf::VideoMode ( 1280, 720 ), "Basic Physics Engine" );

	Object myObject;

	while ( window.isOpen() )
		{
		window.clear();

		myObject.updatePosition (  )

		}

	return 0;
	}



