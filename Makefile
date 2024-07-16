# Makefile for 3D Maze Game with SDL2

# Compiler
CXX := g++

# Directories
SRC_DIR := src
HEADER_DIR := headers
BUILD_DIR := build
BIN_DIR := bin

# Files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%.o,$(SRCS))
EXEC := $(BIN_DIR)/game

# Compiler flags
CXXFLAGS += $(shell sdl2-config --cflags)
LDFLAGS += $(shell sdl2-config --libs)

# Targets
all: $(EXEC)

$(EXEC): $(OBJS) | $(BIN_DIR)
	$(CXX) $(OBJS) -o $(EXEC) $(LDFLAGS)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -I $(HEADER_DIR) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

clean:
	$(RM) -r $(BUILD_DIR) $(BIN_DIR)

.PHONY: all clean

