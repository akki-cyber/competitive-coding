	#include <string.h>
	#include <stdio.h>
	void foo(char *str)
	{
	char buffer[12];
	/*The following statement will result in buffer overflow */
	strcpy(buffer, str);
	printf("%s", buffer);
	}
	int main()
	{
	char *str = "This is definitely longer than 12";
	foo(str);
	return 1;
	}
