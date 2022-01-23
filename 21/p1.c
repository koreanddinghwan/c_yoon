#include <stdio.h>

int main(void)
{
	int ch;

	while(1){
		ch = getchar();
		if(ch == EOF)
			break;
		if(ch < 65 || (ch > 90 && ch < 97) || ch > 122)
		{
			printf("알파벳을 입력해라\n");
			continue;
		}

		if (ch > 64 && ch < 90)
		{
			putchar(ch +32);
			break;
		} else {
			putchar(ch - 32);
			break;
		}

	}	
	return 0;
}
