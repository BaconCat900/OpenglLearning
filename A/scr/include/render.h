#ifndef RENDER_H
#define RENDER_H

#include <glew.h>
#include <glfw3.h>

float vertices[];

// stors a number of vertices for the GPU
unsigned int VBO; // Vertex Buffer Object

void render();
void renderInit();

#endif