CXX	= g++
CFLAGS	= -std=c++17 -O2
LDFLAGS	= -lglfw -lvulkan -ldl -lpthread -lX11 -lXxf86vm -lXrandr -lXi
OUT	= littlevk

.PHONY: all test clean

all: *.cpp *.hpp
	@mkdir -p build
	$(CXX) $(CFLAGS) -o build/$(OUT) *.cpp $(LDFLAGS)

test: all
	./build/$(OUT)

clean:
	rm -rf build
