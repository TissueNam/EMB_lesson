CC= gcc
OBJ= func1.o myapp.o
CFLAG= -g -Wall
TARGET= myapp

$(TARGET) : $(OBJ)
	$(CC) -o $(TARGET) $(OBJ)

%.o : %.c
	$(CC) -c $< -o $@

clean:
	rm -f -v *.o $(TARGET)
