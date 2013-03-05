#pragma once

// SFML and GLEW
#include <GL/glew.h>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

// C++ Standard Library
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iostream>

// Critters
#include "Game.hpp"
#include "Window.hpp"
#include "View.hpp"
#include "Events.hpp"
#include "Utilities/Shader.hpp"
#include "Utilities/Program.hpp"
#include "Camera.hpp"

// Critters Constants
#define TICKS_PER_SECOND 60