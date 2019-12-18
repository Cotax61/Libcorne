##
## EPITECH PROJECT, 2018
## libcorn
## File description:
## Makefile
##

SRC		=	src/corn_apply_gravity.c \
			src/corn_check_clock.c \
			src/corn_create_text.c \
			src/corn_move_rect.c \
			src/corn_load_sound.c \

OBJ		=	$(SRC:.c=.o)

CFLAGS 	=	-Wall -Wextra -Werror -I./include/

TARGET	=	libcorn.a

YELLOW	=	\033[1;35m
PURPLE	=	\033[1;92m
NORMAL	=	\033[0;39m

all:	$(TARGET)

$(TARGET): $(OBJ)
	@echo -e "$(YELLOW)Linking libcorn....$(NORMAL)"
	ar rc $(TARGET) $(OBJ)
	@echo -e "$(PURPLE)Lib successfully linked !$(NORMAL)"

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)
	rm -f ../$(TARGET)

re: clean all

.PHONY: all re clean fclean $(TARGET)