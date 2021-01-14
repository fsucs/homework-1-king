all: doc concat test
	@echo "All done!"
	
doc: Doxyfile ./src/main.cpp ./include/example.hpp
	doxygen Doxyfile
	@echo "Documentation extraction complete."

concat: ./src/main.cpp ./include/example.hpp
	g++ -g -Wall -std=c++11 -I ./include/ ./src/main.cpp -o ./bin/main

test: ./src/main.cpp
	 ./bin/main test
	
clean:
	rm -rf ./doc/*
	rm -rf ./bin/*
