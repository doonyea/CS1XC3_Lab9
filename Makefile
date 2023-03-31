CC=gcc
CFLAGS=-Wall
SRC_DIR=src
BUILD_DIR=build

main : $(SRC_DIR)/main.c $(BUILD_DIR)/student.o $(BUILD_DIR)/course.o docs
	mkdir -p build
	mkdir -p documentations
	mkdir -p documentations/docs
	$(CC) -c $< -o $(BUILD_DIR)/$@.o $(CFLAGS)
	$(CC) build/course.o build/student.o build/main.o -o build/main $(CFLAGS)

student.o : $(SRC_DIR)/student.c
	mkdir -p build
	mkdir -p documentations
	mkdir -p documentations/docs
	$(CC) $(CFLAGS) -c -o $(BUILD_DIR)/student.o $^

course.o : $(SRC_DIR)/course.c
	mkdir -p build
	mkdir -p documentations
	mkdir -p documentations/docs
	$(CC) $(CFLAGS) -c -o $(BUILD_DIR)/course.o $^

clean :
	rm -r -f build
	rm -r -f documentations

doxygen :
	doxygen -g

docs : Doxyfile
	doxygen $^


