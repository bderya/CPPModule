NAME	= PhoneBook

GCC		= c++ -Wall -Wextra -Werror -std=c++98

SOURCE	= ./source/Contact.cpp ./source/PhoneBook.cpp

OBJS	= $(SOURCE:.cpp=.o)

COLOUR_GREEN=\033[0;32m
COLOUR_RED=\033[0;31m
COLOUR_BLUE=\033[0;34m
COLOUR_END=\033[0m

all		: $(NAME)

$(NAME)	: $(OBJS) 
		@$(GCC) $(FLAG) -o $(NAME) $(OBJS)
		@echo "$(COLOUR_GREEN) SUCCESFUL $(COLOUR_END)"

clean	:
		@echo "$(COLOUR_RED) CLEAN $(COLOUR_END)"

fclean	: clean
		@rm -f $(NAME) *.o
		@echo "$(COLOUR_BLUE) FCLEAN $(COLOUR_END)"

re		: fclean all

.PHONY	: all clean fclean re