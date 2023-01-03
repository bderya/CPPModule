NAME	= megaphone

SOURCE	= Megaphone.cpp

GCC		= c++

FLAG	= -Wall -Wextra -Werror -std=c++98

OBJS	=$(SOURCE:.cpp=.o)


all:	$(NAME)

$(NAME)	: $(OBJS) 
		@$(GCC) $(FLAG) -o $(NAME) $(OBJS)
		@mkdir obj
		@mv $(OBJS) ./obj
clean:
		@rm -rf obj

fclean:	clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re