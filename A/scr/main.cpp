#include <iostream>
#include <glew.h>
#include <glfw3.h>

#include "input.h"
#include "render.h"

// Whenever the window changes in size, GLFW calls this function and 
// fills in the proper arguments for you to process.
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
	glViewport(0, 0, width, height);
}

int main() {
	// inits glfw
	if (glfwInit() == GLFW_FALSE) { printf("[ERROR]: failed to init glfw");  return -1; }
	// tels glfw we want to use opengl 3.3
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	// tels glfw that we only want to modern(core) functions
 	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

	// create the window
	GLFWwindow* window = glfwCreateWindow(800, 800, "Wiiiindooooooow", NULL, NULL);
	// error handeling for the window
	if (window == NULL) {
		printf("[ERROR]: failed to create window");
		glfwTerminate();
		return -1;
	}
	// make the context of our window the main context on the current thread.
	glfwMakeContextCurrent(window);

	if (glewInit() != GLEW_OK) { printf("[ERROR]: failed to init glew");  return -1; }

	// dinamicly sets the viewpoint of the window
	glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

	// main loop
	while (!glfwWindowShouldClose(window)) {
		// prosses the inputs
		processInput(window);
		
		// handels the rendering
		render();

		// swaps the front and back buffers for the window
		glfwSwapBuffers(window);

		// proseses the window events
		glfwPollEvents();
	}

	// deletes everything we aren't useing
	glfwTerminate();

	return 0;
}