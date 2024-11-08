#pragma once
#include "../Core/Vector2.h"

class Ball
{
private:
	Vector2 position;

public:
	Ball(float radius);
		

	float radius;
	
	void SetPosition(float x, float y);
		


	
};

