#pragma once
#include "Dependencies/includes/glm/glm.hpp"
class ECS
{
public:
	 ECS();

	 int ID;
	 glm::vec3 Position;
	 glm::vec3 Rotation;
	 glm::vec3 Scale;
	 float Mass;
	 float HP;
	 float Attack;
	 float Defense;
};

