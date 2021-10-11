#include "input.h"

void processInput(GLFWwindow* window) {
	//checks if ESC is pressed and then closes thw window
	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
		glfwSetWindowShouldClose(window, true);
	}
}
