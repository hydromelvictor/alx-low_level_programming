#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * error97 - error for arguments
 *
 * n: parameter
 */
void error97(int n)
{
if (n != 3)
{
dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
exit(97);
}
}

/**
 * error98 - error98
 *
 * @fd: param
 */
void error98(int fd)
{
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
close(fd);
exit(98);
}
}

/**
 * error99 - error for file
 *
 * @fd: param
 */
void error99(int fd)
{
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
close(fd);
exit(99);
}
}

/**
 * error100 - error for close
 *
 * @n: param
 */
void error100(int n)
{
if (n == EOF)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", n);
exit(100);
}
}

/**
 * main - check
 * @argc: param
 * @argv: param
 * Return: int
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, err0, err;
char buf[1024];
error97(argc);
fd_from = open(argv[1], O_RDONLY);
error98(fd_from);
fd_to = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
error99(fd_to);
while (err == 1024)
{
err = read(fd_from, buf, 1024);
error98(err);
err0 = write(fd_to, buf, err);
error99(err0);
if (err != err0)
{
error99(err);
}
}
err = close(fd_from);
error100(err);
err0 = close(fd_to);
error100(err0);
return (0);
}
