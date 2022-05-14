#pragma once

#include "lvk_window.hpp"
#include "lvk_pipeline.hpp"

namespace lvk {
    
class FirstApp {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;
            
        void run();
    private:
        LvkWindow lvkWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
        LvkPipeline lvkPipeline{"build/shaders/triangle_shader.vert.spv", "build/shaders/triangle_shader.frag.spv"};
};

}