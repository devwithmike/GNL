# Get_Next_Line - C - 2019

GNL is a function that reads a file and allows you to read a line ending with a newline character from a file descriptor. When you call the function again on the same file, it grabs the next line.

## WeThinkCode:

**Mandatory:** 100/100  
**Bonus:** 25/25  
**Peers:** 125%  
  
**Total:** 125/125

## Installation:

To get started, clone the Get_Next_Line repo and go into the folder:

```
git clone https://github.com/mikefmeyer/Get_Next_Line
cd Get_Next_Line/
```
Run the following command to compile the libft and the function (Change 'main.c' to suit your main's name and 'test_gnl' to something you want.):

```
make -C libft/ fclean && make -C libft/
clang -Wall -Werror -Wextra -I libft/includes -o get_next_line.o -c get_next_line.c
clang -Wall -Werror -Wextra -I libft/includes -o main.o -c main.c
clang -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
```

## Running the tests:

To test the function, you need to have files you want to read.

### Running the Get_Next_Line function:

Run the executable with './[executable name]' and add the file name you want to read:

```
./[executable name] [file name]
```
