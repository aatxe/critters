#pragma once

class Program {
	public:
		Program();
		~Program();
		void attach(Shader s);
		void link();
		void use();
		void bindAttrib(GLuint index, std::string name);
		GLint getUniformLoc(std::string name);
	protected:
		void create();
		void destroy();
	private:
		GLuint p;
};