#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: parameter
 * @letters: parameter
 * Return: ssize_t
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
size_t err;
char *buf = malloc(sizeof(char) * letters + 1);
if (buf == NULL || filename == NULL)
{
return (0);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
close(fd);
return (0);
}
err = read(fd, buf, letters);
if (err < letters)
{
close(fd);
return (0);   
}
*(buf + letters) = '\0';
err = dprintf(STDOUT_FILENO, "%s", buf);
if (err != letters)
{
close(fd);
return (0);
}
close(fd);
return (err);
}
