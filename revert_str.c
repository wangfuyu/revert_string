#include <stdio.h>
#include <string.h>

#define DEBUG_LOG 
#define DEBUG_PRINT printf 
char *revert_str(char *input)
{
	char *p = NULL;
	char *q = NULL;
	char tmp = 0;
	
	DEBUG_LOG("start: what input? %s\n", NULL == input ? "NULL" : input);
	if (NULL == input || 1 == strlen(input))
	{
		return input;
	}

	p = input;
	q = input + strlen(input) - 1;

	while (p < q)
	{
		tmp = *p;
		*p = *q;
		*q = tmp;
		p++;
		q--;
	}

	return input;
}

int main(int argc, char *argv)
{
	char str_input[1024] = {0};
	char *str_output = NULL;

	scanf("%s", str_input);

	DEBUG_LOG("Your input string: %s\n", str_input);
	str_output = revert_str(str_input);
	DEBUG_PRINT("After revert, string: %s\n", str_output);
	
	return 0;
}
