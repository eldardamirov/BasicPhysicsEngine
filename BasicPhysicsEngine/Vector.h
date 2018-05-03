#pragma once


#include <math.h>
#include "../packages/sfml-system.2.3.2.0/build/native/include/SFML/System/Vector2.hpp"



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

		Vector operator * ( const typeOfData factor )
			{
			return Vector ( x * factor, y * factor );
			}

		typeOfData operator * ( Vector const vectorToMul )
			{
			return ( x * vectorToMul.x + y * vectorToMul.y );
			}

		Vector& Vector::operator *= ( const typeOfData factor )
			{
			this->x = this->x * factor;
			this->y = this->y * factor;

			return *this;
			}

		Vector operator - ()
			{
			return  Vector ( ( -x ), ( -y ) );
			}

		Vector operator / ( const float factor )
			{
			return Vector ( ( x / factor ), ( y / factor ) );
			}

		Vector& Vector::operator /= ( const typeOfData factor )
			{
			this->x = this->x / factor;
			this->y = this->y / factor;

			return *this;
			}

		// value getters;
		typeOfData length()
			{
			return ( sqrt ( ( x * x ) + ( y * y ) ) );
			}

		Vector direction()
			{
			return Vector ( ( x / length() ), ( y / length() ) );
			}

		sf::Vector2f convertToSfVector()
			{
			return sf::Vector2f ( x, y );
			}

	};

































