NAME		=	claptrap

BIN_PATH	=	./bin/

SRCS		=	main.cpp \
				ClapTrap.cpp \

OBJS		=	$(addprefix $(BIN_PATH), $(SRCS:.cpp=.o))

CC			=	c++

FLAGS		=	-Wall -Werror -Wextra
FLAGS		+=	-std=c++98

DEPS_FLAGS	=	-MMD -MP

DEPS		=	$(OBJS:.o=.d)

GREEN		=	\e[92;5;118m
PINK		=	\033[95m
ORANGE		=	\033[38;5;208m
RESET		=	\033[0m

all:	$(NAME)

$(NAME): $(OBJS)
	@ printf "$(PINK)Compiling...$(RESET)🚧\n"
	@ $(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@ printf "$(GREEN)$(NAME) succesfully compiled! $(RESET)\n"

$(BIN_PATH)%.o: %.cpp
	@ printf "$(PINK)Compiling...$(RESET)🚧\n"
	@ mkdir -p $(BIN_PATH)
	@ $(CC) $(FLAGS) $(DEPS_FLAGS) -c $< -o $@

clean:
	@ rm -rf $(BIN_PATH)
	@ printf "$(ORANGE)Cleaned!$(RESET)"

fclean:	clean
	@ rm -rf $(NAME)
	@ clear && printf "$(ORANGE)Fully cleaned!$(RESET)\n"

re: fclean all

-include $(DEPS)
