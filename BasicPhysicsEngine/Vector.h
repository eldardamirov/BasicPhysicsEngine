#pragma once


#include <math.h>
// #include <SFML/System.hpp>


template <typename typeOfData> class Vector
	{
	public:
		// coordinates;
		typeOfData x = 0, y = 0;

		// constructors and destructors;
		Vector()
			{
			
			}

		Vector ( typeOfData xTemp, typeOfData yTemp )
			{
			x = xTemp;
			y = yTemp;
			}

		Vector ( typeOfData alpha )
			{
			x = cos ( alpha );
			y = sin ( alpha );
			}

		// operators overload;
		Vector operator + ( Vector const vectorToAdd )
			{
			return Vector ( x + vectorToAdd.x, y + vectorToAdd.y );
			}

		Vector& Vector::operator += ( const Vector &vectorToAdd )
			{
			this->x = this->x + vectorToAdd.x;
			this->y = this->y + vectorToAdd.y;

			return *this;
			}

		Vector operator - ( Vector const vectorToSub )
			{
			return Vector ( x - vectorToSub.x, y - vectorToSub.y );
			}

		Vector& Vector::operator -= ( const Vector &vectorToSub )
			{
			this->x = this->x - vectorToSub.x;
			this->y = this->y - vectorToSub.y;

			return this;
			}

	};

