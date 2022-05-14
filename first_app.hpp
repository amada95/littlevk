#pragma once

#include "lvk_window.hpp"

namespace lvk {
    
class FirstApp {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;
            
        void run();
    private:
        LvkWindow lvkWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
};

}