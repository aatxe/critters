#pragma once

class Shader {
	public:
		enum type : GLenum {
			vertex = GL_VERTEX_SHADER,
			fragment = GL_FRAGMENT_SHADER,
		};
		Shader();
		Shader(std::string, type);
		void load(std::string, type);
	private:
		GLuint s;
		type t;
		friend class Program;
};