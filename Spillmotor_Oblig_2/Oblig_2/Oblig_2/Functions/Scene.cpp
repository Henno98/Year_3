#include "Scene.h"


Scene::Scene()
{
	
};

void Scene::Init(int width, int height)
{
	// Initialize GLFW
		glfwInit();
	// Tell GLFW what version of OpenGL we are using 
	// In this case we are using OpenGL 3.3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// Tell GLFW we are using the CORE profile
	// So that means we only have the modern functions
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	// Create a GLFWwindow object of 800 by 800 pixels, naming it "OpenGL"
	window = glfwCreateWindow(width, height, "OpenGLProject", NULL, NULL);
	// Error check if the window fails to create
	
	// Introduce the window into the current context
	glfwMakeContextCurrent(window);
	//Load GLAD so it configures OpenGL
	gladLoadGL();
	// Specify the viewport of OpenGL in the Window
	glViewport(0, 0, width, height);
}

void Scene::Update()
{
	// Specify the color of the background
	glClearColor(0.01f, 0.01f, 0.1f, 1.0f);
	// Clean the back buffer and depth buffer
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);



	//Swap the back buffer with the front buffer
	glfwSwapBuffers(window);
	// Take care of all GLFW events
	glfwPollEvents();
}

void Scene::End()
{
	// Delete window before ending the program
	glfwDestroyWindow(window);
	// Terminate GLFW before ending the program
	glfwTerminate();
}
