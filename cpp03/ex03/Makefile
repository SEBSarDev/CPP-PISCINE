NAME = DiamondTrap
CC = clang++
FLAG = -Wall -Werror -Wextra -std=c++98 -Wshadow -Wno-shadow
SRCS = main.cpp \
	   ClapTrap.cpp \
	   ScavTrap.cpp \
	   FragTrap.cpp \
	   DiamondTrap.cpp
OBJS = $(SRCS:.cpp=.o)
$(NAME) : $(OBJS)
	$(CC) $(FLAG) $(OBJS) -I./ -o $(NAME)
%.o : %.cpp
	$(CC) $(FLAG) -o $@ -c $<
all : $(NAME)
clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all
.PHONY : all clean fclean re
