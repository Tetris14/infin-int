##
## TRISTAN GORY PROJECT, 2022
## Infin-int makefile
## File description:
## Makefile infin-int
##

NAME	=	test

SRCS	=	$(wildcard ./src/*.cpp)	\

OBJS	=	$(SRCS:.cpp=.o)

CXXFLAGS	+= -I./include

RM	=	rm -f
CXX	=	g++

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CXX) -o $(NAME) $(OBJS) $(CXXFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all $(NAME) clean fclean re