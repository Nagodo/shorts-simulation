#include "Vector2.h"

class Vector2 {
private:
	float x, y;

public:
	
	Vector2()
	{
		this->x = 0;
		this->y = 0;
	}
	
	Vector2(float x, float y)
	{
		this->x = x;
		this->y = y;
	}
};
