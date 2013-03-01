#include "../Global.hpp"

static char buf[0x1000];

Program::Program() {
	this->create();
}
	
Program::~Program() {
	this->destroy();
}

void Program::attach(Shader s) {
	glAttachShader(p, s.s);
}

void Program::link() {
	glLinkProgram(p);
	glGetProgramInfoLog(p, 0x1000, 0, buf);
	std::cout << buf << &fflush;
	GLint linked;
	glGetProgramiv(p, GL_LINK_STATUS, &linked);
	if (!linked) abort();
}

void Program::use() {
	glUseProgram(p);
}
	
void Program::bindAttrib(GLuint index, std::string name) {		
	glBindAttribLocation(p, index, name.c_str());
	glEnableVertexAttribArray(index);
}

GLint Program::getUniformLoc(std::string name) {
	return glGetUniformLocation(p, name.c_str());
}

void Program::create() {
	p = glCreateProgram();
}

void Program::destroy() {
	glDeleteProgram(p);
}