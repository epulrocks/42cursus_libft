# Source files for the library (ft_*.c files)
SRCS = \
	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c\
	ft_isprint.c	ft_strlen.c		ft_toupper.c	ft_tolower.c\
	ft_memset.c		ft_bzero.c		ft_memcpy.c		ft_memmove.c\
	ft_memchr.c		ft_memcmp.c		ft_strlcpy.c	ft_strlcat.c\
	ft_strchr.c		ft_strrchr.c	ft_strncmp.c	ft_strnstr.c\
	ft_atoi.c		ft_calloc.c		ft_strdup.c		ft_substr.c\
	ft_strjoin.c	ft_strtrim.c	ft_split.c		ft_itoa.c\

# Name of the static library to be created
NAME = libft.a

# Object files corresponding to the source files
# This automatically changes .c to .o for each file in SRCS
# OBJS = ft_isalpha.o ft_isdigit.o ...
OBJS = ${SRCS:.c=.o}

# Define the C compiler to use
CC = cc

# Define the archiver for creating static libraries
# r => replace/insert member files (e.g. .o) into archive file (.a).
# c => create .a if not exist.
# s => create index/symbol table?? TODO: Research!
AR = ar rcs

# Define the command for removing files
# -f => force, suppresses any prompt (e.g. confirmation message)
RM = rm -f

# Compiler flags:
# -Wall: Enable all standard warnings
# -Wextra: Enable extra warnings
# -Werror: Treat warnings as errors
CFLAGS = -Wall -Wextra -Werror

# Default target: builds the library
# all: libft.a
all: ${NAME}

# Rule to create the static library
# It depends on all object files being compiled
# libft.a: ft_isalpha.o ft_isdigit.o ...
${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

# Generic rule to compile a .c file into a .o file
# $<: the first prerequisite (the .c file)
# $@: the target (the .o file)
# -c (Compile only, do not link)
# -o (Output file name)
ft_%.o: ft_%.c
	${CC} ${CFLAGS} -c $< -o $@

norm:
	norminette ft_*.c libft.h

# Rule to clean up object files
clean:
	${RM} ${OBJS}

# Rule to clean up object files and the library file
fclean: clean
	${RM} ${NAME}

# Rule to recompile everything from scratch
re: fclean all

# Phony targets to prevent conflicts with files of the same name
.PHONY: all clean fclean re
