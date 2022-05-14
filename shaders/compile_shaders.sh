#!/bin/bash

mkdir -p build/shaders

cd shaders
for i in *.{vert,frag}; do
    echo "processing: " "$i" "->" "build/shaders/${i}.spv";
    glslc "$i" -o "../build/shaders/${i}.spv";
done
cd ..