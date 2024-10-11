#pragma once
#include "Dependencies/includes/glm/glm.hpp"
#include "vector"



class ECS
{

public:
	ECS();
	int ID;
	glm::vec3 Position;
	glm::vec3 Scale;
	glm::vec3 Rotation;
	std::vector<glm::vec3> PositionData;
	std::vector<glm::vec3> ScaleData;
	std::vector<glm::vec3> RotationData;
	float Mass;
	float HP;
	float Damage;
	float Defense;
	void GetPos();
	void SetPos();
	void InsertData();
	glm::mat4 ReturnMatrix();

};

