#pragma once
#include <math.h>
#include "src/Framework/entity.hh"
#include "src/Framework/event.hh"
#include "src/Framework/event_handlers.hh"

class Ball : public Entity
{
public:
	float vel_x = 200.0f;
	float vel_y = 200.0f;

	void onHit(collisionEvent* e);
};
