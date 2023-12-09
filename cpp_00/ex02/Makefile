NAME		=		GlobalsBankstersUnited

BIN_PATH	=		./bin/

CC			=		c++
FLAGS		=		-Wall -Werror -Wextra
FLAGS		+=		-std=c++98
DEPS_FLAGS	=		-MMD -MP

SRCS		=		Account.cpp \
					tests.cpp

OBJS		=	$(addprefix $(BIN_PATH), $(SRCS:.cpp=.o))
DEPS		=		$(OBJS:.o=.d)

GREEN		=	\e[92;5;118m
PINK		=	\033[95m
ORANGE		=	\033[38;5;208m
RESET		=	\033[0m

all: $(NAME)

$(NAME):	$(OBJS)
	@ printf "$(PINK)Compiling...$(RESET)🚧\n" && sleep 1
	@ $(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@ clear && printf "💵 $(GREEN)$(NAME) successfuly compiled!$(RESET) 🏦\n"

$(BIN_PATH)%.o:	%.cpp
	@ mkdir -p $(dir $@)
	@ printf "$(PINK)Compiling...$(RESET)🚧\n" && sleep 1
	@ $(CC) $(FLAGS) $(DEPS_FLAGS) -c $< -o $@

clean:
	@ rm -rf $(BIN_PATH)
	@ clear && printf "$(ORANGE)Cleaned!$(RESET)\n"

fclean:	clean
	@ rm -rf $(NAME)
	@ clear && printf "$(ORANGE)Fully cleaned!$(RESET)\n"

re:	fclean all
