#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    char c;
    int i;
    extern char *optarg;
    extern int optind;

    while ((c = (char)getopt(argc, argv, "cdflm:M")) != -1)
    {
        switch (c)
        {
            case 'c':
                printf("きゃべつウィーク\n");
                break;
            case 'd':
                printf("闇のお茶会\n");
                break;
            case 'f':
                printf("森のシャワー\n");
                break;
            case 'l':
                printf("光るどんぐり\n");
                break;
            case 'm':
                for (i = atoi(optarg); i > 0; i--)
                    printf("もみゅ\n");
                break;
            case 'M':
                printf("きのこマスター\n");
            default:
                break;
        }
    }
    argc -= optind;
    argv += optind;
    return 0;
}

