#include "lvk_window.hpp"
#include <GLFW/glfw3.h>

namespace lvk {

LvkWindow::LvkWindow(int w, int h, std::string name) : width{w}, height{h}, windowName{name} {
    initWindow();
}

LvkWindow::~LvkWindow() {
    glfwDestroyWindow(window);
    glfwTerminate();
}

void LvkWindow::initWindow() {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

    window = glfwCreateWindow(width, height, windowName.c_str(), nullptr, nullptr);
}

}