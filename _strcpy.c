/**
 * _strcpy - copies a string to another string
 * @dest: destination of copied string
 * @src: string to be copied
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *p_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (p_dest);
}
