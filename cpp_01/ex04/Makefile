NAME		=	replace

BIN_PATH	=	./bin/

SRC			=	main.cpp

CC			=	c++
FLAGS		=	-Wall -Werror -Wextra
FLAGS		+=	-std=c++98

OBJ		=	$(addprefix $(BIN_PATH), $(SRC:.cpp=.o))

GREEN		=	\e[92;5;118m
PINK		=	\033[95m
ORANGE		=	\033[38;5;208m
RESET		=	\033[0m

all:	$(NAME)

$(NAME):	$(OBJ)
	@ printf "$(PINK)Compiling...$(RESET)🚧\n" && sleep 1
	@ $(CC) $(FLAGS) $(OBJ) -o $(NAME)
	@ clear && printf "🛠️ $(GREEN)$(NAME) successfuly compiled!$(RESET)🏗️\n"

$(BIN_PATH)%.o: %.cpp
	@ mkdir -p $(BIN_PATH)
	@ printf "$(PINK)Compiling...$(RESET)🚧\n" && sleep 1
	@ $(CC) $(FLAGS) -c $< -o $@

clean:
	@ rm -rf $(BIN_PATH)
	rm -f *.replace
	@ clear && printf "$(ORANGE)Cleaned!$(RESET)\n"

fclean: clean
	@ rm -f $(NAME)
	@ clear && printf "$(ORANGE)Fully cleaned!$(RESET)\n"

re:	fclean all

-include $(DEPS)
