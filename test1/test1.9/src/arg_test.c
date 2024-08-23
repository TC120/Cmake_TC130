#include <stdio.h>
#include <stdlib.h> 
#include <val_test.h>

int main(int argc, char ** argv)
{
    if (argc != 3 + 1)
    {
        printf("input args is not three\n");
    }
    else
    {
        printf("get args is %d, %d, %d", atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));

        val_test(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
    }
    return 0;
}
