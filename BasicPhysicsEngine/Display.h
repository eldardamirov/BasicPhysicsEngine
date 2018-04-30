#pragma once
#include "../packages/sfml-system.2.3.2.0/build/native/include/SFML/Graphics/RenderWindow.hpp"

#include "Constants.h"



class Display
	{

	public:
	
		void drawObject ( sf::RenderWindow &window, FloatVector2d position )
			{
			sf::CircleShape materialPoint ( 30 );
			materialPoint.setPosition ( position.convertToSfVector() );
			materialPoint.setOrigin ( materialPoint.getRadius(), materialPoint.getRadius() );

			window.draw ( materialPoint );
			}




	};
