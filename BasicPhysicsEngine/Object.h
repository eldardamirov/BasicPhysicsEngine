#pragma once

#include "Constants.h"


class Object
	{
	public:
		Object ( float massTemp, FloatVector2d positionTemp, FloatVector2d velocityTemp, FloatVector2d forceTemp ) : position ( positionTemp.x, positionTemp.y ), velocity ( velocityTemp.x, velocityTemp.y ), force ( forceTemp.x, forceTemp.y )
			{
			mass = massTemp;
			}


		void updatePosition()
			{
			velocity = velocity + ( force / mass );
			position = position + ( velocity * dt );
			}

		FloatVector2d getPosition()
			{
			return position;
			}

		FloatVector2d getVelocity()
			{
			return velocity;
			}

		FloatVector2d getForce()
			{
			return force;
			}


	private:
		FloatVector2d position;
		FloatVector2d velocity;
		FloatVector2d force;
		float mass = 0.0;



	};