NAME = HiThisIsBrain

SRCS = main.cpp
OBJS = ${SRCS:.cpp=.o}

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJS)
	@printf "$(CURSIVE)$(GRAY) 	- Compiling $(NAME)... $(RESET)\n"
	@$(CC) $(OBJS) $(CFLAGS) -o $(NAME)
	@printf "$(GREEN)    - Executable ready.\n$(RESET)"

clean:
	@$(RM)  $(OBJS)
	@printf "$(YELLOW)    - Removed objs.o.$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "$(RED)    - Executable removed.$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re

#Colors:
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
GRAY		=	\e[33;2;37m
RESET		=	\e[0m
CURSIVE		=	\e[33;3m
RED = \033[0;31m