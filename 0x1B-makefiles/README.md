# 0x1B. C - Makefiles

20180615
The purpose of this project is to introduce the use of Makefiles

### 0-Makefile
Makefile using all

### 1-Makefile
Makefile using all  
variables: CC, SRC

### 2-Makefile
Makefile using all  
variables: CC, SRC  
CC: the compiler to be used  
SRC: the .c files  
OBJ: the .o files  
NAME: the name of the executable

### 3-Makefile
Makefile using all
rules:
all: builds your executable 
clean: deletes all Emacs and Vim temporary files along with the executable 
oclean: deletes the object files fclean: deletes the Emacs temporary files, the executable, and the object files 
re: forces recompilation of all source files
variables: CC, SRC  
CC: the compiler to be used  
SRC: the .c files  
OBJ: the .o files  
NAME: the name of the executable

### 4-Makefile
Makefile using all
rules:
all: builds your executable 
clean: deletes all Emacs and Vim temporary files along with the executable 
oclean: deletes the object files fclean: deletes the Emacs temporary files, the executable, and the object files 
re: forces recompilation of all source files
variables: CC, SRC  
CC: the compiler to be used  
SRC: the .c files  
OBJ: the .o files  
NAME: the name of the executable
CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic

### 5-Makefile
A function def island_perimeter(grid): that returns the perimeter of the island described in grid