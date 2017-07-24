#include <stdio.h>
#if defined(__GNUC__)
#include <unistd.h>
#elif defined(_MSC_VER)
#include "getopt.h"
#include <stdlib.h>
#else
errorimi
#endif

const char *moption2momutput[] = {
    "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
    "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
    "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "",
    "", "", "", "", "", "", "", "", "", "",
    /* : */ "もみゅ", "", "", "", "", "", "",
    /* A */ "", "", "", "", "", "", "", "", "", "", "", "",
    /* M */ "きのこマスター",
    "", "", "", "", "", "", "", "", "", "", "", "",
    /* Z */ "",
    /* [ */ "", "", "", "", "", /* ` */ "",
    /* a */ "",
    /* b */ "",
    /* c */ "きゃべつウィーク",
    /* d */ "闇のお茶会",
    /* e */ "",
    /* f */ "森のシャワー",
    /* g */ "",
    /* h */ "こんにちは！",
    /* i */ "",
    /* j */ "",
    /* k */ "",
    /* l */ "光るどんぐり",
    /* m */ "もみゅ",
    /* n */ "",
    /* o */ "",
    /* p */ "",
    /* q */ "",
    /* r */ "",
    /* s */ "",
    /* t */ "",
    /* u */ "",
    /* v */ "",
    /* w */ "",
    /* x */ "",
    /* y */ "",
    /* z */ ""};

int main(int argc, char *argv[])
{
    int c, i, m;
    extern char *optarg;
    extern int optind;

    while ((c = getopt(argc, argv, ":Mcdfhlm:")) != -1)
    {
        printf("%s\n", moption2momutput[c]);
        if (c != (int)'m')
        {
            continue;
        }
        for (m = atoi(optarg) - 1; m > 0; m--)
        {
            printf("もみゅ\n");
        }
    }
    argc -= optind;
    argv += optind;
    for (i = 0; i < argc; i++)
    {
        printf("%sもみゅ\n", argv[i]);
    }
    return 0;
}
