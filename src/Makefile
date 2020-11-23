SRC_DIR = ./ \
	
module_a_DIR=$(SRC_DIR)/module_a
TARGET=example

all: main

module_a.o:
	gcc -c -I$(module_a_DIR) $(module_a_DIR)/module_a.c -o $(module_a_DIR)/module_a.o

main: module_a.o
	# gcc -I$(module_a_DIR) $(module_a_DIR)/module_a.o $(SRC_DIR)/main.c -o $(TARGET)

clean:
	rm $(SRC_DIR)/*.o $(module_a_DIR)/*.o $(TARGET)
