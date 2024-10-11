#include "ObjectBinders.h"



void ObjectBinders::Init(GLfloat* vertices, GLsizeiptr size)
{
	glGenVertexArrays(1, &ID);
	glGenBuffers(1, &ID);
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	glBufferData(GL_ARRAY_BUFFER, size, vertices, GL_STATIC_DRAW);
}

void ObjectBinders::EBOInit()
{
}

void ObjectBinders::Bind(GLuint layout, GLuint numComponents, GLenum type, GLsizeiptr stride, void* offset)
{
	glBindBuffer(GL_ARRAY_BUFFER, ID);
	glVertexAttribPointer(layout, numComponents, type, GL_FALSE, stride, offset);
	glEnableVertexAttribArray(layout);
}

void ObjectBinders::EBOBind()
{
}

void ObjectBinders::Unbind()
{
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER, 0);

}

void ObjectBinders::Delete()
{
	glDeleteVertexArrays(1, &ID);
	glDeleteBuffers(1, &ID);
}

