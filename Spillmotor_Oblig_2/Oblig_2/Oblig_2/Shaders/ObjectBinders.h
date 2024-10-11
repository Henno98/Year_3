#pragma once
#include "../Dependencies/includes/glad/glad.h"
class ObjectBinders
{
	ObjectBinders();

	GLuint ID;

	
	void Init(GLfloat* vertices, GLsizeiptr size);
	void EBOInit();

	void Bind(GLuint layout, GLuint numComponents, GLenum type, GLsizeiptr stride, void* offset);
	
	void EBOBind();

	void Unbind();

	void Delete();
	

};

