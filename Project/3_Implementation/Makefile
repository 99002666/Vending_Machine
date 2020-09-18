SRC = src/vending_machine.c\
main.c

INC = inc/vending_machine.h

PROJECT_NAME = Vending_Machine.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -f $(PROJECT_NAME) 
