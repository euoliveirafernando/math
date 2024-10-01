#include <stdio.h>
#include <stdlib.h>
#include <graph.h>

#define USAGE   "math  --  Copyright (c) 2024\n"  \
                "usage: math <byte> <options>\n"

static void parse(char ** argv)
{
    graph * g;
    
    g = load(argv);
    exec(g);
}

int main(int argc, char ** argv)
{
    if (argc < 2)
        printf(USAGE);
    else
        parse(&argv[2]);
    
    return 0;
}