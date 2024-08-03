SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o megaphone

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f megaphone

re : fclean all

.PHONY : all clean re