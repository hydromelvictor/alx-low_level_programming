#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
int create_file(const char *filename, char *text_content)
{
int fd, err, count = 0;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
if (fd == -1 || filename == NULL)
{
close(fd);
return (-1);
}
while (text_content[count] != '\0')
{
count++;
}
if (count != 0)
{
err = write(fd, text_content, count);
if (err != count)
{
close(fd);
return (-1);
}
}
close(fd);
return (1);
}
