#include <SFML/Graphics.hpp>


#include "Constants.h"
#include "Vector.h"
#include "Display.h"
#include "Object.h"

#define Vector <float> FloatVector2d;





int main ()
	{
	Display myDisplay ( 1280, 720, "Basic Physics Engine" );
	Object myObject ( 5, FloatVector2d ( 50, 50 ), FloatVector2d ( 3, 3 ), FloatVector2d ( 5, 5 ) );
	Object myObject2 ( 5, FloatVector2d ( 550, 150 ), FloatVector2d ( 3, 3 ), FloatVector2d ( 5, 5 ) );
	Object myObject3 ( 5, FloatVector2d ( 450, 650 ), FloatVector2d ( 3, 3 ), FloatVector2d ( 5, 5 ) );



	while ( myDisplay.getDisplayWindow()->isOpen() )
		{
		myDisplay.clear();

		myObject.updatePosition();
		myDisplay.drawObject ( myObject.getPosition() );
		
		myDisplay.display();
		}

	return 0;
	}



