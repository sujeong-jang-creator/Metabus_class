/*
	문자열과 관련된 함수들 집합
*/

int my_strlen(char* str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

void my_strcpy(char* s1, char* s2)
{
	//while (*s1++ = *s2++);

	/*
	int i = 0;
	while (s1[i] = s2[i++]);
	*/

	int i = 0;
	do
	{
		s1[i] = s2[i];
	} while (s2[i++] != '\0');


	/*
	int i = 0;
	while(s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	*/
}

void my_strcat(char* s1, char* s2)
{
	/*
	while (*s1)
		s1++;
	while (*s1++ = *s2++);
	*/

	int i = 0, j = 0;
	while (s1[i] != '\0')
		i++;

	do
	{
		s1[i++] = s2[j];
	} while (s2[j++] != '\0');
}

int my_strcmp(char* s1, char* s2)
{
	int i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return s1[i] - s2[i];
}