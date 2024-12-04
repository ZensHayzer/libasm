NAME = libasm.a

INC_DIR = includes
SRCS_DIR = $(shell find srcs -type d)
OBJS_DIR = objects

vpath %.s $(foreach dir,$(SRCS_DIR),$(dir):)

OBJS = $(addprefix $(OBJS_DIR)/,$(SRCS:%.s=%.o))

SRCS = ft_strlen.s	\
       ft_strcpy.s	\
       ft_strcmp.s	\
       ft_write.s	\
       ft_read.s	\
	   ft_strdup.s


CC = gcc
NASM = nasm
CFLAGS = -Wall -Werror -Wextra -lm -lc -no-pie
NASM_FLAGS = -f elf64

$(OBJS_DIR)/%.o: %.s | $(OBJS_DIR)
	@echo "Assembling $<"
	@$(NASM) $(NASM_FLAGS) -I${INC_DIR} $< -o $@

$(NAME): $(OBJS)
	@echo "Creating $(NAME)"
	@ar rcs $(NAME) $(OBJS)
	@echo "======== COMPLETE ========"

$(OBJS_DIR):
	@mkdir -p $@

.PHONY: all
all: $(NAME)

.PHONY: clean
clean:
	@echo "Deleting $(OBJS_DIR)"
	@rm -rf $(OBJS_DIR)
	@echo "======== COMPLETE ========"

.PHONY: fclean
fclean: clean
	@echo "Deleting $(NAME)"
	@rm -f $(NAME)
	@rm -f test_main
	@echo "======== COMPLETE ========"

.PHONY: re
re: fclean all

.PHONY: test
test: all
	$(CC) $(CFLAGS) -I${INC_DIR} -o test_main main.c $(NAME)
