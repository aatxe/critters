#include "../Global.hpp"

std::map<std::string, GLuint> Shaders;
static char buf[0x1000];

Shader::Shader() {
	s = 0;
}

Shader::Shader(std::string name, type l_t) {
	load(name, l_t);
}

void Shader::load(std::string name, type l_t) {
	s = Shaders[name];
	if (s) return;
	t = l_t;
	Shaders[name] = s = glCreateShader(t);
	std::ifstream file(("Shaders/" + name + ".glsl").c_str());
	file.read(buf, 0x1000);
	const GLchar* t = buf;
	glShaderSource(s, 1, &t, nullptr);
	glCompileShader(s);
	glGetShaderInfoLog(s, 0x1000, 0, buf);
	std::cout << buf << &fflush;
	GLint compiled;
	glGetShaderiv(s, GL_COMPILE_STATUS, &compiled);
	if (!compiled) abort();
}