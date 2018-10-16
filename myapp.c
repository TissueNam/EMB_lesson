#include <stdio.h>
#include "func1.h"
#include "func2.h"

void kcm(void);
void Good(void);
int main(void)
{
	func1();
//	func2();
	kcm();
	return 0;
}

void kcm(void)
{
	printf("kcm\n");

}

void Good(void)
{
	printf("Good~~\n");
}
