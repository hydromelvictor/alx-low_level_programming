#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: parameter
 * @text_content: parameter
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd, count = 0, err;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_RDWR | O_APPEND, 0600);
if (fd == -1)
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
return (0);
}
}
close(fd);
return (1);
}
