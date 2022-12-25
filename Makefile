make: clean build run

build:
	mkdir build
	g++ src/datatypes.cpp examples/example.cpp -o build/example.out
	@echo "build: ok"

clean:
	rm -fr build/
	@echo "ok"

run:
	@echo "run: ok"
	build/example.out