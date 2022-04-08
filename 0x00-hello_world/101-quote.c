#include<unistd.h>
/**
 * main-entry point 
 * Return:1
 * 
 */
int main(void)
{
	char ch[]="and that piece of art is useful\" - Dora Korpar, 201-10-19\n";
	
	write(2, ch, sizeof(ch));
	return (1);
}
