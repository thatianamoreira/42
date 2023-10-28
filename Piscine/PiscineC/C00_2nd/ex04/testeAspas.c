#include <unistd.h>
int main(void)
{
	char	*x;
//	char	y;
//	char	z;
//	int	w;

	x = "oi";
//	y = '122';
//	z = '1222';
//	w = "oi";
	
	write(1, x, 2);
//	write(1, y, 3);
//	write(1, z, 4);
//	write(1, w, 2);
}
