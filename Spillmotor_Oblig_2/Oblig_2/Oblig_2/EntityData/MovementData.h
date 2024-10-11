#pragma once
#include "Component.h"
#include "../Dependencies/includes/glm/glm.hpp"
class MovementData : Component
{
	glm::vec3 Speed;
	bool HasMovement{false};
	void GetSpeed();
	//void CalculateMovement();
};

