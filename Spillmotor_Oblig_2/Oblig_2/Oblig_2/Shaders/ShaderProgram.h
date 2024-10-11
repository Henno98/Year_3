#ifndef SHADER_CLASS_H
#define SHADER_CLASS_H

#include "../Dependencies/includes/glad/glad.h"
#include<string>
#include<fstream>
#include<sstream>
#include<iostream>
#include<cerrno>

std::string get_file_contents(const char* filename);

class ShaderProgram
{
public:
	// Reference ID of the Shader Program
	GLuint ID;
	// Constructor that build the Shader Program from 2 different shaders
	ShaderProgram(const char* vertexFile, const char* fragmentFile);

	// Activates the Shader Program
	void Activate();
	// Deletes the Shader Program
	void Delete();
};
#endif