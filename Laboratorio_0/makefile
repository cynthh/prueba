TARGET = myprog
OBJ_DIR = ../obj
BIN_DIR = ../bin
INC_DIR = ../inc
SRC_DIR = ../src
OBJS    = $(OBJ_DIR)/Estudiante.o
		  $(OBJ_DIR)/Informacion.o
		  $(OBJ_DIR)/DTInfoEstudiante.o
		  $(OBJ_DIR)/DTFecha.o
		  $(OBJ_DIR)/chatGPT.o
		  $(OBJ_DIR)/Libro.o
		  $(OBJ_DIR)/PaginaWeb.o
		  $(OBJ_DIR)/utils.o

CFLAGS = -Wall -I$(INC_DIR)

$(TARGET) : $(OBJS)
	mkdir -p $(BIN_DIR)
	gcc $(CFLAGS) $(OBJS) -o $(TARGET)

$(OBJ_DIR)/%.o : $(SRC_DIR)/%.c
	mkdir -p $(OBJ_DIR)
	gcc -c -MD $(CFLAGS) $< -o $@

-include $(OBJ_DIR)/*.d

.PHONY: clean
clean :
	@rs -r $(OBJ_DIR) $(BIN_DIR)
