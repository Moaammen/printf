/**
 * rot13 - traslate an array of chars to ROT13
 * @arr: An array of chars
 * Return: Translated array
 */
char *rot13(char *arr)
{
	int i = 0;
	int j = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	static char buffer[2048];

	while (arr[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (in[j] == arr[i])
			{
				buffer[i] = out[j];
				break;
			}
		}
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
