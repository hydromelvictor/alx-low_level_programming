#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
size_t err;
char *buf = malloc(sizeof(char) * letters + 1);
if (buf == NULL || filename == NULL)
{
return (-1);
}
fd = open(filename, O_RDONLY);
if (fd == -1)
{
close(fd);
return (0);
}
read(fd,buf, letters);
*(buf + letters) = '\0';
err = dprintf(STDOUT_FILENO, "%s\n", buf);
if (err != letters + 1)
{
close(fd);
return (0);
}
close(fd);
return (err);
}
