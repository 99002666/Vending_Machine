# Name of the project
PROJECT_NAME = VENDING_MACHINE

# Output directory
BUILD = build

# All source code files
SRC = Project/3_Implementation/src/vending_machine.c\
Project/3_Implementation/main.c

# All test source files
TEST_SRC = Project/3_Implementation/src/vending_machine.c\
Project/3_Implementation/test/test_file.c

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out

# All include folders with header files
INC = Project/3_Implementation/inc/vending_machine.h


PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

# Document files
DOCUMENTATION_OUTPUT = Project/3_Implementation/documentation/html

# Default target built
$(PROJECT_NAME):all

# Run the target even if the matching name exists
.PHONY: run clean test  doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out

# Call `make run` to run the application
run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out

# Document the code using Doxygen
doc:
	make -C ./documentation

# Build and run the unit tests
test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) -lcunit
	./$(TEST_OUTPUT)

# Remove all the built files, invoke by `make clean`
clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)

# Create new build folder if not present
$(BUILD):
	mkdir build
