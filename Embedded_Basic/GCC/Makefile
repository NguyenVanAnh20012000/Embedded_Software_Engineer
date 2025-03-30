TARGET = main.exe

SRC_DIR = ./src
LIB_DIR = ./lib
LIB_FILE = $(SRC_DIR)/llib_mylib.o
LIB = $(LIB_DIR)/llib_mylib.a
INC = ./quan

SOURCES = $(wildcard $(SRC_DIR)/*.c)  # All .c files in src/
OBJECTS = $(patsubst $(SRC_DIR)/%.c, $(SRC_DIR)/%.o, $(SOURCES))

all : $(TARGET)

$(TARGET) : $(OBJECTS) $(LIB)
	gcc -g -o $@ $(OBJECTS) -L$(LIB_DIR) $(LIB)

$(SRC_DIR)/%.o : $(SRC_DIR)/%.c
	gcc -g -o $@ -c $< -I$(INC)

$(LIB) : $(LIB_FILE)
	ar rcs $(LIB) $(LIB_FILE)
clean:
	rm -rf $(SRC_DIR)/*.o main.exe $(LIB_DIR)/*.o $(LIB_DIR)/*.a