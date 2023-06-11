NAME	= phonebook

CC	= c++
CFLAGS		= -g -Wall -Wextra -Werror -std=c++98

RM	= rm -rf

SRCS	= PhoneBook.cpp, Contact.cpp, main.cpp
OBJS	= $(SRC:%.cpp=%.o)

all:	$(NAME)

$(NAME):	$(OBJS) 
	$(CC) $(CFLAGS)  $(OBJS) -o $(NAME)

%.o:	%.cpp
		$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re