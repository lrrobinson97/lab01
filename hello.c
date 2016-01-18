#include <stdio.h>

/* Hello world 
 * by Lauren Robinson
 */

int main(int argc, char *argv[])
{
	printf("Hello world!\n");
	printf("by Lauren Robinson\n");

	/* This Section computes a sum*/
	int x, y, z;
	x = 10;
	y = 20;
	z = x + y;
	printf("x is %d, y is %d, and z is %d\n", x, y, z);
	/*this section calculates the volume of a box*/
	int h, d, w, v;
	h = 11;
	d = 14;
	w = 7;
	v = h*d*w; 
	printf("height is %d, depth is %d, width is %d, and volume is %d\n", h, d, w, v);
	return 0;

}
