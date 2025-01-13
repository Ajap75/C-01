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

NAME = Violence_inutile
COMPIL = c++
FLAGS =  -Wall -Werror -Wextra -std=c++98

PINK = \033[1;35m
BLUE = \033[1;36m
NC = \033[0m

HEADER = headers/Weapon.hpp headers/HumanA.hpp  headers/HumanB.hpp

SRCS = main.cpp \
		 Weapon.cpp \
		 	HumanA.cpp \
				HumanB.cpp

PSRCS = $(addprefix srcs/, $(SRCS))

OBJS = $(PSRCS:srcs/%.cpp=objs/%.o);

all : $(NAME)

objs/%.o: srcs/%.cpp $(HEADER)
		@mkdir -p objs
		@$(COMPIL) $(FLAGS) -c $< -o $@

$(NAME) : $(OBJS)
		@$(COMPIL) $(FLAGS) -o $@ $(OBJS)
		@echo "$(BLUE)\n  Violence_inutile COMPILED \n$(NC) "


clean :
	@rm -rf objs
	@echo  "$(BLUE)\n  Violence_inutile CLEANED \n$(NC)"

fclean : clean
	@rm -rf $(NAME)
	@echo  "$(BLUE)\n  Violence_inutile FULLY CLEANED \n$(NC)"

leak :
	@valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes --track-fds=yes ./$(NAME)

re : fclean all

.PHONY : all clean fclean re bonus