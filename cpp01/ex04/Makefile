NAME = replace
CC = c++
FLAG = -Wall -Werror -Wextra -std=c++98
SRCS = main.cpp \
	   Sed.cpp
OBJS = $(SRCS:.cpp=.o)
$(NAME) : $(OBJS)
	$(CC) $(FLAG) $(OBJS) -I./ -o $(NAME)
%.o : %.cpp
	$(CC) $(FLAG) -o $@ -c $<
all : $(NAME)
clean :
	rm -rf $(OBJS)
fclean : clean
	rm -rf *.replace
	rm -rf $(NAME)
re : fclean all
.PHONY : all fclean clean re
