NAME1		=	server
NAME2		=	client

LIB_PATH	=	libft/

LIB			=	${LIB_PATH}libft.a

NEW_LIB_PATH=	new_libft/

SRC	=	srcs/


SRCS1		=	${SRC}server.c
SRCS2		=	${SRC}client.c


OBJ1			=	${SRCS1:.c=.o}
OBJ2			=	${SRCS2:.c=.o}


CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -g3

RM			=	rm -rf

.PHONY		:	all subsystem clean fclean re

all			:	subsystem ${NAME1} ${NAME2}

subsystem	:	
				@make -C ${LIB_PATH} all

${NAME1}		: 	${OBJ1}
				@${CC} ${CFLAGS} ${OBJ1} ${LIB} -o ${NAME1}

${NAME2}		: 	${OBJ2}
				@${CC} ${CFLAGS} ${OBJ2} ${LIB} -o ${NAME2}			




clean		:
				@make -C ${LIB_PATH} clean
				@${RM} ${OBJ1}
				@${RM} ${OBJ2}

fclean		:	
				@make -C ${LIB_PATH} fclean
				@${RM} ${NAME1}
				@${RM} ${NAME2}
				@${RM} ${OBJ1}
				@${RM} ${OBJ2}

re			:	fclean all
