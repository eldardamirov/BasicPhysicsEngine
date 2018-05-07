#include <SFML/Graphics.hpp>


#include "Constants.h"
#include "Vector.h"
#include "Display.h"
#include "Object.h"


#define Vector <float> FloatVector2d;





int main ()
	{
	Display myDisplay ( 1280, 720, "Basic Physics Engine" );
	Object myObject ( 1000, FloatVector2d ( 100, 300 ), FloatVector2d ( 0, 0 ), FloatVector2d ( 0, 0 ) );
	Object myObject2 ( 10, FloatVector2d ( 400, 300 ), FloatVector2d ( 5, 0 ), FloatVector2d ( 0, 0 ) );
	Object myObject3 ( 5000, FloatVector2d ( 450, 650 ), FloatVector2d ( 3, 3 ), FloatVector2d ( 5, 5 ) );

	FloatVector2d currentDistance ( 0, 0 );
	FloatVector2d force ( 0, 0 );

	float k = 0.5;
	float initialDistance = 300;
	sf::Clock timer;
	float totalDelay = 0.f;


	while ( myDisplay.getDisplayWindow()->isOpen() )
		{
		totalDelay = totalDelay + timer.getElapsedTime().asSeconds();
		timer.restart();


		myDisplay.clear();

		currentDistance = myObject2.getPosition() - myObject.getPosition();

		force = ( currentDistance / currentDistance.length() ) * ( currentDistance.length() - initialDistance ) * k;
		
		myObject.setForce ( force );
		myObject2.setForce ( -force );

		initialDistance = currentDistance.length();

		myObject.updatePosition();
		myObject2.updatePosition();
	//	myObject3.updatePosition();

		myDisplay.drawObject ( myObject );
		myDisplay.drawObject ( myObject2 );
	//	myDisplay.drawObject ( myObject3 );
		
		myDisplay.display();
		}

	return 0;
	}



