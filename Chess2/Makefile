.PHONY := clean
CXXFLAGS := -Os -fdata-sections -ffunction-sections -fno-exceptions -fno-rtti -std=c++17 -Wall -Wextra -pedantic
CXX := g++

UNAME_S := $(shell uname -s)

ifeq ($(UNAME_S),Darwin)
    LDFLAGS := -Wl,-dead_strip
else ifeq ($(UNAME_S),Linux)
    LDFLAGS := -Wl,-gc-sections
else ifeq ($(OS),Windows_NT)
    LDFLAGS :=
else
    LDFLAGS :=
endif


OBJECTS := main.o board.o piece.o pawn.o rook.o knight.o bishop.o king.o \
           queen.o position.o checker.o console_visitator.o seaman.o

# For eclipse

all: main

main: $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $^

clean:
	@rm -f main $(OBJECTS) > /dev/null 2>&1
