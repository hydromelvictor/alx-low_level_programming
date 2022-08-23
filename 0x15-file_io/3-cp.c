#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#define TOP 1024
int main(int argc, char *argv[])
{
int fd_pos, fd, err0, err, pos = 0;
char buf[TOP];
if (argc != 3)
{
dprintf(STDERR_FILENO,"Usage: cp file_from file_to\n");
exit(97);
}
fd_pos = open(argv[1], O_RDONLY);
if (fd_pos == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
exit(98);
}
fd = open(argv[2], O_RDWR | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
exit(99);
}
err0 = read(fd_pos, buf, TOP);
if (err0 < 0)
{
write(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n", 39);
exit(99);
}
err0 = write(fd, buf, TOP);
if (err0 < 0 || err0 < 0)
{
write(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n", 39);
exit(99);
}
err = close(fd_pos);
if (err == EOF)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_pos);
exit(100);
}
err = close(fd);
if (err == EOF)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
exit(100);
}
return (0);
}
