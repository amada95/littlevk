#include "first_app.hpp"
#include <GLFW/glfw3.h>

namespace lvk {

void FirstApp::run() {
    while(!lvkWindow.shouldClose()) {
        glfwPollEvents();
    }
}

}