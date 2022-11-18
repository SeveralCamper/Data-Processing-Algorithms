CFLAGS := -Wall -Werror -std=c++17
CPPFLAGS := -MMD
CXX := g++

TARGET := bin/DSA

SOURCES := $(wildcard src/DSA/main.cpp)
LIBSOURCES := $(wildcard src/lib/*.cpp)

LIBOBJ := $(patsubst src/lib/%.cpp, obj/src/%.o, $(LIBSOURCES))
LIB := obj/lib/functionLib.a

OBJ := $(patsubst src/DSA/%.cpp, obj/src/%.o, $(SOURCES))

all:$(TARGET)

$(TARGET): $(LIB) $(OBJ)
	$(CXX) $(CFLAGS) $(CPPFLAGS) -o $(TARGET) $(OBJ) -L. $(LIB)  

$(LIB): $(LIBOBJ)
	ar rcs $@ $^

obj/src/%.o: src/lib/%.cpp
	$(CXX) $(CPPFLAGS) $(CFLAGS) -c $< -o $@  -I src/lib 

obj/src/%.o: src/DSA/%.cpp
	$(CXX) $(CPPFLAGS) $(CFLAGS) -c $< -o $@  -Isrc/lib  

run: $(TARGET)
	./bin/DSA

check_leaks:
	valgrind --track-origins=yes --leak-check=full  ./$(TARGET)


rebuild: clean all

clean:
	find . -name "*.o" -exec rm '{}' \;
	find . -name "*.d" -exec rm '{}' \;
	find . -name "*.a" -exec rm '{}' \;
	find ./bin -type f -name "DSA" -exec rm -f '{}' \;
	find ./bin -type f -name "TestDSA" -exec rm -f '{}' \;

format:
	cd src; find . -name "*.cpp" -exec clang-format -i {} \;
	cd src; find . -name "*.h" -exec clang-format -i {} \;

.PHONY: clean test run all format 
