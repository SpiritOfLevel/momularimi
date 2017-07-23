#include <stdio.h>
#if defined(__GNUC__)
#include <unistd.h>
#elif defined(_MSC_VER)
#include "getopt.h"
#include <stdlib.h>
#else
errorimi
#endif

char *moption2momutput[] = {
"","","","","","","","","","","","","","","","",
"","","","","","","","","","","","","","","","",
"","","","","","","","","","","","","","","","",
"","","","","","","","","","","","","","","","","",
/* A */"","","","","","","","","","","","",
/* M */"きのこマスター",
"","","","","","","","","","","","",
/* Z */"",
/* [ */"","","","","",/* ` */"",
/* a */"",
/* b */"",
/* c */"きゃべつウィーク",
/* d */"闇のお茶会",
/* e */"",
/* f */"森のシャワー",
/* g */"",
/* h */"こんにちは！",
/* i */"",
/* j */"",
/* k */"",
/* l */"光るどんぐり",
/* m */"もみゅ",
/* n */"",
/* o */"",
/* p */"",
/* q */"",
/* r */"",
/* s */"",
/* t */"",
/* u */"",
/* v */"",
/* w */"",
/* x */"",
/* y */"",
/* z */""
};


int main(int argc, char *argv[])
{
    int c, i;
    extern char *optarg;
    extern int optind;

    while ((c = getopt(argc, argv, "cdfhlmM")) != -1)
    {
        printf("%s\n",moption2momutput[c]);
    }
    argc -= optind;
    argv += optind;
    for (i = 0; i < argc; i++)
    {
        printf("%sもみゅ\n", argv[i]);
    }
    return 0;
}
