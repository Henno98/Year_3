#pragma once
#include "Component.h"
#include "../Dependencies/includes/glm/glm.hpp"
class PositionData : Component
{
	glm::vec3 Position;
	void GetPosition();
};

