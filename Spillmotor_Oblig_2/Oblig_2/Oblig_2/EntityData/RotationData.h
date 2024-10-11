#pragma once
#include "Component.h"
#include "../Dependencies/includes/glm/glm.hpp"
class RotationData : Component
{
	glm::vec3 Rotation;
	void GetRotation();
};

