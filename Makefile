# Compiler
CXX := g++

# Directories
SRC_DIR := src
INC_DIR := include
THIRD_PARTY := third_party
BUILD_DIR := build

# Output binary
TARGET := game

# Source files
SRCS := $(wildcard $(SRC_DIR)/*.cpp)

# Object files
OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)

# Compiler flags
CXXFLAGS := -std=c++17 -Wall -Wextra -I$(INC_DIR) -I$(THIRD_PARTY)

# Default target
all: $(TARGET)

# Link step
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@

# Compile step
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# Phony targets
.PHONY: all clean