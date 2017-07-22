#include <stdio.h>
#if defined(__GNUC__)
#include <unistd.h>
#elif defined(_MSC_VER)
#include <stdlib.h>
#include "getopt.h"
#else
errorimi
#endif

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

/*                                 .,.                        ..,.
                                 .dMMN,                      .MMMN,
                                .MMF?MMp                    (MMDTMNe
                               .MMNggkMMp                  (MMNggdMMp
                              .MMMMMHMMMM|                .MMMMHMMMMMp
                             .MMF      dMN.              .MM@      7MN;
                            .MM@....(...MMb              (MMi..(-...dMN,
                            dMMMMMMMMMMMMMN<            .MMMMMMMMMMMMMMb.
                           .MM9=        (MMb...(J+JJ-...+MN!        ?TMM[                        
                          .MM@  ...JgNMMMMMMMMMMMMMMMMMMMMMMMNNag-..  dMN-
                      ....JMMgMMMMMMB""7!                  ??""WMMMMMNNMMm....
             ...&gNMMMMMMMMMMB"=                                   _?TWMMMMMMMMMMNNgJ..
         .JgMMMMMB""?!  jMM>                                            (MMR. _?7"WMMMMMNa..
      .gMMMB"!         (MM\                                              (MMm         _"WMMMa,
    .dMM9^            .MM%                                                (MM[            (TMMN,
   (MM@              .MMF                                                  ?MM;              TMMp
   .MMNmJ..         .MM@                                                    dMN-         ...gMM#^
     _TMMMMMNNNg+J..dM#!       ..(+ggggJ..                ..JgggggJ..       .MMN..(JggNMMMMMM"!
          _?"""MMMMMMM%     .JMMMMMB""HMMMNa.          .(MMMMH""WMMMMNg,     ,MMMMMMMB""7!
                  .MM@     dMMHWgNMMMMNaJ?TM$          ?MB=(gMMMMMNmyHMM#     dMN.
                  (M#!     .!(MMM9"??7TMMMe.            .(MMM9"??7TMMNe?!     .MMb
                 .MMF       (MM%        (MMN,          .dM#^        ?MMb       dMN_
                 (MM:      .MM%           MMb          dM#           (MM;      .MMp
                 dM#       ,MM{           JMM          MMF           .MMr       dM#
                 MMF       .MMb.          dM#          MMN.          (M#!       (MN.
                .MM\        (MMN,       .dMM'          .MMN,       .dMM^        .MM{
                .MM)         .TMMNgJ..+NMM@!            .TMMNg-.(&MMM@!         .MM}
                .MM]            ?TMMMMMB"                  7TMMMMMB=            .MM:
                 MMb                         ..       ..                        (M#              
                 dMN.                       dMNa.   .dMM>                      .MM@
                 .MMb                        ?MMMNNMMMD                        (M#:
                  ?MMp                         -7"""^                         (MMt         
                   ?MMm.                                                     (MM$
                    (MMNJ                                                  .MM#^                 
                      ?MMNa,                                            .(MMM"
                        ?TMMNg,.                                    ..+MMM#=
                           ?TMMMNNa...                        ...JgMMMMB= 
                               ?TWMMMMMMNNNggJ.......JgNgNNMMMMMMMB"^                            
                                     _?7"""HMMMMMMMMMMMHB""""!*/ 
