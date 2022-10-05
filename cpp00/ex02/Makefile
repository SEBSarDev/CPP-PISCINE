NAME = Account
CC = clang++
FLAG = -Wall -Wextra -Werror -std=c++98
SRCS = Account.cpp \
	   tests.cpp
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
