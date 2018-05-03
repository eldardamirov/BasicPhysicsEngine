#pragma once

#include "Constants.h"


class Object
	{
	public:
		Object ( float massTemp )
			{
			mass = massTemp;
			}


		void updatePosition()
			{
			velocity = velocity + ( force / mass );
			position = position + ( velocity * dt );
			}

		FloatVector2d* getPosition()
			{
			return &position;
			}

		FloatVector2d* getVelocity()
			{
			return &velocity;
			}

		FloatVector2d* getForce()
			{
			return &force;
			}


	private:
		FloatVector2d position;
		FloatVector2d velocity;
		FloatVector2d force;
		float mass = 0.0;



	};