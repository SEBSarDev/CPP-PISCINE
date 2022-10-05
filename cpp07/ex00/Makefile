NAME = Templates
FLAG = -Wall -Werror -Wextra -std=c++98
CC = clang++
SRCS = main.cpp \
	   Test.cpp
OBJS = $(SRCS:.cpp=.o)
$(NAME) : $(OBJS)
	$(CC) $(FLAG) $(OBJS) -I./ -o $(NAME)
%.o : %.cpp
	$(CC) $(FLAG) -o $@ -c $<
all: $(NAME)
clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf $(NAME)
re : fclean all
.PHONY : all clean fclean re
