CXX	= g++
CFLAGS	= -std=c++17 -O2
LDFLAGS	= -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
OUT	= littlevk

.PHONY: all test clean

all: *.cpp *.hpp
	@mkdir -p build
	$(CXX) -o build/$(OUT) *.cpp $(CFLAGS) $(LDFLAGS)

test: all
	./build/$(OUT)

clean:
	rm -rf build
