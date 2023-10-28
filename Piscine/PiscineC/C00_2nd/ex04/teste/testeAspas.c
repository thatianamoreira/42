#include <unistd.h>

int main(void)
{
	char	x;
	char	y;
	char	z;
	int	w;

	x = "122";
	y = '122';
	z = '1222';
	w = "oi";
	
	write(1, &x , 1);
	write(1, &y , 1);
	write(1, &z , 1);

	write(1, &w , 1);

//	write(1, &  , 1);

//	write(1, &  , 1);

//	write(1, &  , 1);

}
