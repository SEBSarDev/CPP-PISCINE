NAME = Interface
CC = clang++
FLAG = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp \
	   AMateria.cpp \
	   Character.cpp \
	   MateriaSource.cpp
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
