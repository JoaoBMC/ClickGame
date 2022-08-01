#include <stdio.h>
#include "game.h"

int main(int argc, char const *argv[])
{
    Game g;
    g.setMoney(100);
    printf("%ld", g.getMoney());
    return 0;
}
