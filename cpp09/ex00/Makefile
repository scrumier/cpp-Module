SRCS = main.cpp BitcoinExchange.cpp
OBJDIR = obj
OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)
DEPS = $(OBJS:.o=.d)
NAME = btc
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I .

all: $(NAME)
	@echo "\033[32mCompiled $(NAME)\033[0m"

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	@$(CC) $(CFLAGS) $(INC) -MMD -MP -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

-include $(DEPS)

clean:
	@rm -rf $(OBJDIR)
	@echo "\033[31mDeleted $(OBJDIR)\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo "\033[31mDeleted $(NAME)\033[0m"

re: fclean all

.PHONY: all clean fclean re
