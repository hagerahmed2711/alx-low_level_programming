#include <unistd.h>
/***/

int main(void)
{
	char h[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n"
	write(1, h, 59);
	return (1);
}
