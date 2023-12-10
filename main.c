// #include <fcntl.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include "get_next_line.h"
// int main()
// {
//     int fd;
//     char *line;
//     fd = open("myfile.txt", O_RDONLY);
//     if (fd == -1)
//     {
//         perror("Error opening file");
//         return 1;
//     }
//     while ((line = get_next_line(fd)) != NULL)
//     {
//         printf("%s\n", line);
//         free(line);
//     }
//     close(fd);
//     return (0);
// }
// sampl.txt
// Hello , How are you! let's have some chat there is no new line here
// sample.txt
// Hello , How are you!let's have some chat
// there is a new line here
// aamir zuhail basheer
// empty.txt
// read.txt
// hello world
#include "get_next_line.h"

int main()
{
	int fd = open("sampl.txt", O_RDONLY);
	char *line = get_next_line(fd);
	printf("Test case 1: %s\n", line);
	free(line);
	// line = get_next_line(0);
	// printf("function second call: %s\n", line);
	// free(line);
	// line = get_next_line(0);
	// printf("function third call: %s\n", line);
	// free(line);
	// line = get_next_line(0);
	// printf("function fourth call: %s\n", line);
	// free(line);
	// line = get_next_line(fd);
	// printf("Test case 1: %s\n", line);
	// free(line);
	// line = get_next_line(fd);
	// printf("function second call: %s\n", line);
	// free(line);
	// line = get_next_line(fd);
	// printf("function third call: %s\n", line);
	// free(line);
	// line = get_next_line(fd);
	// printf("function fourth call: %s\n", line);
	// free(line);
	// line = get_next_line(fd);
	// printf("Test case 1: %s\n", line);
	// free(line);
	// line = get_next_line(fd);
	// printf("function second call: %s\n", line);
	// free(line);
	// line = get_next_line(fd);
	// printf("function third call: %s\n", line);
	// free(line);
	// line = get_next_line(fd);
	// printf("function fourth call: %s\n", line);
	// free(line);
	// while((line = get_next_line(fd)) != NULL)
	// {
	// 	printf("%s",line);
	// 	free(line);
	// }
	close(fd);
	// fd = open("sampl.txt", 0);
	// line = get_next_line(fd);
	// printf("Test case 2: %s\n", line);
	// free(line);
	// line = get_next_line(fd);
	// printf("function second call: %s\n", line);
	// free(line);
	// close(fd);
	// // printf("function fourth call: %s\n", line);
	// fd = open("empty.txt", 0);
	// line = get_next_line(fd);
	// printf("Test case 3: %s\n", line);
	// close(fd);
	// free(line);
}