#!/bin/bash

# Test script for cin.cpp
# This script should be run from the project root directory.

EXECUTABLE="./build/cin"

# Check if the executable exists
if [ ! -f "$EXECUTABLE" ]; then
    echo "Error: Executable $EXECUTABLE not found. Please compile cin.cpp first."
    echo "Command: g++ -std=c++17 -I./include -o build/cin src/cin.cpp"
    exit 1
fi

# --- Test Case 1 ---
echo "Running Test Case 1..."
input="5 7"
expected_output="sum = 12"

actual_output=$(echo "$input" | $EXECUTABLE)

# Compare actual output with expected output
if [ "$actual_output" == "$expected_output" ]; then
    echo "Test Case 1 (5 + 7) Passed!"
else
    echo "Test Case 1 (5 + 7) Failed!"
    echo "Expected: '$expected_output'"
    echo "Got: '$actual_output'"
    exit 1
fi

# --- Test Case 2 ---
echo "Running Test Case 2..."
input="-10 4"
expected_output="sum = -6"

actual_output=$(echo "$input" | $EXECUTABLE)

if [ "$actual_output" == "$expected_output" ]; then
    echo "Test Case 2 (-10 + 4) Passed!"
else
    echo "Test Case 2 (-10 + 4) Failed!"
    echo "Expected: '$expected_output'"
    echo "Got: '$actual_output'"
    exit 1
fi

echo "All tests passed!"
exit 0
