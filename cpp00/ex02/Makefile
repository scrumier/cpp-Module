SRCS = test.cpp Account.cpp
OBJDIR = obj
OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)
DEPS = $(OBJS:.o=.d)
NAME = account
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I .

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	$(CC) $(CFLAGS) $(INC) -MMD -MP -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

-include $(DEPS)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
