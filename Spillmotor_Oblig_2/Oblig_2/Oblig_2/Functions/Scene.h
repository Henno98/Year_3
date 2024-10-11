#pragma once
#include <iostream>
#include "../Dependencies/includes/glm/glm.hpp"
#include "../Dependencies/includes/glad/glad.h"
#include "../Dependencies/includes/GLFW/glfw3.h"
class Scene
{
public:
	Scene();
	GLFWwindow* window;
	void Init(int width, int height);
	void Update();
	void End();
};

