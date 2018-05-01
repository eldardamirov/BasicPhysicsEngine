#pragma once

#include "Constants.h"


class Object
	{
	public:
		void updatePosition ( FloatVector2d& position, FloatVector2d& velocity, FloatVector2d& force, const float dt, const float mass )
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




	};