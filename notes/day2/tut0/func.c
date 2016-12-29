#include <stdio.h>

void func1(int x)
{
	if (x < 0) {
		printf("%d is negative\n", x);
	} else {
		printf("%d is positive\n", x);
	}
}

int func2(int x)
{
	int result = 0;

	switch (x) {
		case 0:
			result = 0;
			break;
		case 65:
			result = x ^ 0x20;
			break;
		case 100:
			result = ((x - 15) * 2) / 4;
			break;
		case -1:
			result = x << 2;
			result += result >> 3;
			break;
		default:
			result = -1;
			break;
	}
	return result;
}

int main(int argc, char* argv[])
{
	int x, y;

	printf("Hello there! Please provide an integer: ");
	scanf("%d", &x);
	func1(x);
	y = func2(x);

	printf("y is %d\n", y);

	return 0;
}
