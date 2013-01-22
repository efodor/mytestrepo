#include <stdio.h>
#include "foo.h"

main() {
	int x;
	x = foo(10+35);
	printf("This is a test.  foo() returns %d.\n", x);
}
