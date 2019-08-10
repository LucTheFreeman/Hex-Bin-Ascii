NAME	=	hex-ascii-bin

MYLIB	=	./../../mylib/

FLAGS	=	-g

CC	=	gcc

SDIR	=	src/

SRC	=	$(SDIR)converters.c	\
		$(SDIR)helpers.c	\
		$(SDIR)main.c

IDIR	=	inc/

INC	=	$(NAME).h

default:
	$(CC) $(FLAGS) $(SRC) -I $(IDIR) -L $(MYLIB) -lmylib -I $(MYLIB) -o $(NAME)
