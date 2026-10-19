#include "Ball.h"

void Ball::onHit(collisionEvent* e)
{
	if (e->colEntity == 1)
		vel_x = std::abs(vel_x);
	else if (e->colEntity == 2)
		vel_x = -std::abs(vel_x);
	else if (e->colEntity == 3)
		vel_y = -std::abs(vel_y);
}
