# Makefile for C++ Practice Project

CXX = g++
CXXFLAGS = -std=c++17 -I./include
SRC_DIR = src
BUILD_DIR = build
TARGETS = $(patsubst $(SRC_DIR)/%.cpp,$(BUILD_DIR)/%, $(wildcard $(SRC_DIR)/*.cpp))

all: $(TARGETS)

$(BUILD_DIR)/%: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $<

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean
