#define GLFW_INCLUDE_NONE
#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <fmt/core.h>

#include <iostream>

int main()
{
    if (!glfwInit())
    {
        std::cout << "Bad job!\n";
    }
    else fmt::print("Good job!\n");
    //else std::cout << "Good job!\n";

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    //glsl_version currently only used for imgui code
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE); //make so window is not resizable
    //glfwWindowHint(GLFW_SAMPLES, 4);

    const char* glsl_version = "#version 330"; //if 3.3, then 330 and same for newer versions

    /* Create a windowed mode window and its OpenGL context */
    GLFWwindow* window;
    GLFWmonitor* monitor = glfwGetPrimaryMonitor(); 
    const GLFWvidmode* mode = glfwGetVideoMode(monitor);
    window = glfwCreateWindow(800, 800, "Template", NULL, NULL);
    //window = glfwCreateWindow(mode->width, mode->height, "Template", glfwGetPrimaryMonitor(), NULL);
    if (!window)
    {
        std::cout << "Failed to create GLFW window\n";
        glfwTerminate();
        return -1;
    }
    else fmt::print("Your GLFW Window is initialized\n");

    glfwMakeContextCurrent( window );

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }
    else std::cout << "Glad is working\n";

    glViewport(0, 0, 800, 800);

    glClearColor(0.07f, 0.13f, 0.17f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glfwSwapBuffers(window);

    while (!glfwWindowShouldClose(window))
    {
        glfwPollEvents();
    }
    

    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}