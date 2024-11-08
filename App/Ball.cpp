#include "Ball.h"

class Ball {
	private:
		Vector2 position;
		
		float radius;
		
	public:

		Ball(float radius) {
			this->radius = radius;
		}

		
		
		void SetPosition(float x, float y) {
			this->position.x = x;
			this->position.y = y;
		}

	
		
};
