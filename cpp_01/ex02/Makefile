NAME	=	brainAnnouncement

SRC		=	main.cpp
OBJ	=	$(SRC:.cpp=.o)

CC		=	c++
FLAGS	=	-Wall -Werror -Wextra
FLAGS	+=	-std=c++98

GREEN	=	\e[92;5;118m
PINK	=	\033[95m
ORANGE	=	\033[38;5;208m
RESET	=	\033[0m

all:	$(NAME)

$(NAME): $(OBJ)
	@ printf "$(PINK)Compiling...$(RESET)🚧\n" && sleep 1
	@ $(CC) $(FLAGS) -o $(NAME) $(OBJ)
	@ clear && printf "$(GREEN)🧠🧠$(NAME) successfuly compiled!$(RESET) 🧠🧠\n"

%.o: %.cpp
	@ $(CC) $(FLAGS) -c $< -o $@
	@ printf "$(PINK)Compiling...$(RESET)🚧\n" && sleep 1

clean:
	@ rm -rf $(OBJ)
	@ printf "$(ORANGE)Cleaned!$(RESET)\n"

fclean:	clean
	@ rm -rf $(NAME)
	@ clear && printf "$(ORANGE)Fully Cleaned!$(RESET)\n"

re: fclean all
