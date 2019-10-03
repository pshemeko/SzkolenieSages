.PHONY := clean
CXXFLAGS := -Os -fdata-sections -ffunction-sections -fno-exceptions -fno-rtti -std=c++17 -Wall -Wextra -pedantic -pthread
CXX := g++

UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Darwin)
    LDFLAGS := -Wl,-dead_strip
else ifeq ($(UNAME_S),Linux)
    LDFLAGS := -Wl,-gc-sections -pthread
else ifeq ($(OS),Windows_NT)
    LDFLAGS :=
else
    LDFLAGS :=
endif


OBJECTS := main.o seaman.o

# For eclipse

all: main

main: $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $^

clean:
	@rm -f main $(OBJECTS) > /dev/null 2>&1
