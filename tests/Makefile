# Set compiler info
CC			=	cc
CFLAGS		=	-Wall -Werror -Wextra

# Set directories
BSE_DIR		=	.
SRC_DIR		=	$(BSE_DIR)
OBJ_DIR		=	$(BSE_DIR)
HDR_DIR		=	$(BSE_DIR)

# Set source files
SRCS		=	\
				$(SRC_DIR)/perform_test.c \
				$(SRC_DIR)/test_ft_atoi.c \
				$(SRC_DIR)/test_ft_bzero.c \
				$(SRC_DIR)/test_ft_calloc.c \
				$(SRC_DIR)/test_ft_isalnum.c \
				$(SRC_DIR)/test_ft_isalpha.c \
				$(SRC_DIR)/test_ft_isascii.c \
				$(SRC_DIR)/test_ft_isdigit.c \
				$(SRC_DIR)/test_ft_memchr.c \
				$(SRC_DIR)/test_ft_memcmp.c \
				$(SRC_DIR)/test_ft_memcpy.c \
				$(SRC_DIR)/test_ft_memmove.c \
				$(SRC_DIR)/test_ft_memset.c \
				$(SRC_DIR)/test_ft_strchr.c \
				$(SRC_DIR)/test_ft_strdup.c \
				$(SRC_DIR)/test_ft_strlcat.c \
				$(SRC_DIR)/test_ft_strlcpy.c \
				$(SRC_DIR)/test_ft_strlen.c \
				$(SRC_DIR)/test_ft_strncmp.c \
				$(SRC_DIR)/test_ft_strnstr.c \
				$(SRC_DIR)/test_ft_strrchr.c \
				$(SRC_DIR)/test_ft_tolower.c \
				$(SRC_DIR)/test_ft_toupper.c \
				$(SRC_DIR)/test.c \

# Set object files
OBJS		=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# Set library files
LIB			=	../libft.a

# Set targets
NAME		=	test

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIB) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(HDR_DIR)
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -o $@ -c $< -I $(HDR_DIR)

clean:
ifneq ($(OBJ_DIR), $(BSE_DIR))
	rm -r $(OBJ_DIR)
endif
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re
