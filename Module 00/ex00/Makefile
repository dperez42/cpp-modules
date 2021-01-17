NAME = megaphone
SRCS_DIR = ./
SRCS =	megaphone.cpp
# FLAGS ====================================================================================
FLAGS = -Wall -Wextra -Werror 
# OBJS =====================================================================================
OBJS_DIR 	= 	myobjs/
OBJ 		= 	$(SRCS:.cpp=.o)
OBJS 		= 	$(addprefix $(OBJS_DIR), $(OBJ))

# FROM SUBJECT =============================================================================
$(OBJS_DIR)%.o :	$(SRCS_DIR)%.cpp $(INCS_DIR)
	@mkdir -p $(OBJS_DIR)
	@mkdir -p $(OBJS_DIR)/contacts
	@echo "Compiling: $<"
	@clang++ $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@clang++ -g -fsanitize=address $(FLAGS) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	@echo "Cleaning: $(OBJS_DIR)"
	@rm -rf $(OBJS_DIR)

fclean: clean
	@echo "Cleaning: $(NAME)"
	@rm -f $(NAME)

re: fclean all
.PHONY: clean
# test======================================================================================
run: 	$(NAME)
	@clear
	@echo "-----------------Testing: $(NAME)-----------------------------"
	./$(NAME) "shhhhh... I think the students are asleep..."
	./$(NAME) Damnit " ! " "Sorry students, I thought this thing was off."
	./$(NAME) Damnit " ! "			 "Sorry students, I thought this thing was off." 			"probing tabs"
	./$(NAME) 
# ==========================================================================================
