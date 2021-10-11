#include "render.h"

// set of poins for a triangel that opengl will draw
float vertices[] = {
	-0.5f, -0.5f, 0.0f, // bottom left
	 0.5f, -0.5f, 0.0f, // bottom right
	 0.0f,  0.5f, 0.0f  // top
};

void render() {
	// sets the back buffer to a color
	glClearColor(0.0, 0.0, 0.0, 1.0);
	// clears the frount buffer to the color of the back buffer
	glClear(GL_COLOR_BUFFER_BIT);
}

void renderInit() {
	// creates the Vertex Buffer Object object
	glGenBuffers(1, &VBO);
	// binds the Vertex Buffer Object to the Array Buffer
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	// the Vertex Buffer Object takes a array of floats
	// that represents points in a 3D plane.

}
