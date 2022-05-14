CXX		= g++
CFLAGS	= -std=c++17 -O2
LDFLAGS	= -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
OUT		= littlevk

.PHONY: all shaders clean

all: src/*.cpp src/*.hpp shaders
	@mkdir -p build/bin
	$(CXX) $(CFLAGS) -o build/bin/$(OUT) **/*.cpp $(LDFLAGS)
	@build/bin/$(OUT)

clean:
	rm -rf build
