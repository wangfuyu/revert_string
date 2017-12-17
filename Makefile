
APP_NAME=revert_str
OBJ_NAME=revert_str.o

$(APP_NAME):$(OBJ_NAME)
	gcc $^ -o $(APP_NAME)

%.o:%.c
	gcc -c $^ -o $@

clean:
	rm *.o $(APP_NAME)
