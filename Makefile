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
				$(SRC_DIR)/ft_atoi.c \
				$(SRC_DIR)/ft_bzero.c \
				$(SRC_DIR)/ft_calloc.c \
				$(SRC_DIR)/ft_isalnum.c \
				$(SRC_DIR)/ft_isalpha.c \
				$(SRC_DIR)/ft_isascii.c \
				$(SRC_DIR)/ft_isdigit.c \
				$(SRC_DIR)/ft_memchr.c \
				$(SRC_DIR)/ft_memcmp.c \
				$(SRC_DIR)/ft_memcpy.c \
				$(SRC_DIR)/ft_memmove.c \
				$(SRC_DIR)/ft_memset.c \
				$(SRC_DIR)/ft_strchr.c \
				$(SRC_DIR)/ft_strdup.c \
				$(SRC_DIR)/ft_strlcat.c \
				$(SRC_DIR)/ft_tolower.c \
				$(SRC_DIR)/ft_toupper.c \

# Set object files
OBJS		=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# Set targets
NAME		=	libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

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
