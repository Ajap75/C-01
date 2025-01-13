  # **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: antoinejourdan-astruc <antoinejourdan-a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 12:53:29 by anastruc          #+#    #+#              #
#    Updated: 2024/11/13 13:39:32 by antoinejour      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = HarlFilter
COMPIL = c++
FLAGS =  -Wall -Werror -Wextra -std=c++98

PINK = \033[1;35m
BLUE = \033[1;36m
NC = \033[0m

HEADER = headers/Harl.hpp

SRCS = main.cpp \
		 Harl.cpp \


PSRCS = $(addprefix srcs/, $(SRCS))

OBJS = $(PSRCS:srcs/%.cpp=objs/%.o);

all : $(NAME)

objs/%.o: srcs/%.cpp $(HEADER)
		@mkdir -p objs
		@$(COMPIL) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
		@$(COMPIL) $(FLAGS) -o $@ $(OBJS)
		@echo "$(BLUE)\n  Harl COMPILED \n$(NC) "


clean :
	@rm -rf objs
	@echo  "$(BLUE)\n  HarlFilter CLEANED \n$(NC)"

fclean : clean
	@rm -rf $(NAME)
	@echo  "$(BLUE)\n  HarlFilter FULLY CLEANED \n$(NC)"

leak :
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes ./$(NAME)

re : fclean all

.PHONY : all clean fclean re bonus