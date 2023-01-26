/**
 * rot13 - traslate an array of chars to ROT13
 * @arr: An array of chars
 * Return: Translated array
 */
char *rot13(char *arr)
{
	int i;
	int j;
	char in[53] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[53] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (j = 0; arr[j] !='\0'; j++)
	{
                i = 0;
		while (in[i] != '\0' && arr[j] != in[i])
                      i++; 

		if (in[i] == arr[j])
	        	arr[j] = out[i];
		 
		
		
          
	}

	return (arr);
}
