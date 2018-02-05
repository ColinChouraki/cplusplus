//  Copyright (c) 2018 Antoine Tran Tan
//

#include <stdlib.h>
#include <time.h>

unsigned short lancer_de()
{
    srand(time(NULL));
    return (rand() % 6) + 1;
}
