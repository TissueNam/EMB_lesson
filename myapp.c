#include <stdio.h>
#include "func1.h"

void kcm(void);

int main(void)
{
	func1();
	kcm();
	return 0;
}

void kcm(void)
{
	printf("kcm\n");

}
