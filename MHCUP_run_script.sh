#!/bin/bash

echo "Compiling Sol.cpp ..."
g++ -Wall -Wl,-stack_size,20000000 -O2 -o Sol Sol.cpp

if [ $? -eq 0 ]; then
    echo "Compilation done!"
else
    echo "Compilation failed!"
    exit 1
fi

echo "Running Sol ..."
./Sol < input.txt > output.txt

if [ $? -eq 0 ]; then
    echo "Run done!"
    echo "Output:"
    cat output.txt
else
    echo "Execution failed!"
    exit 1
fi
