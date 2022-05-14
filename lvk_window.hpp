#pragma once

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace lvk {
	class LvkWindow {
		public:
			LvkWindow(int w, int h, std::string name);
			~LvkWindow();
			
			bool shouldClose();
		private:
			void initWindow();

			const int width;
			const int height;
			std::string windowName;
			GLFWwindow* window;
	};
}
