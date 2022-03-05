#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int aflag = 0;
    int bflag = 0;
    char *cvalue = NULL;
    int index, c;

    opterr = 0;


    while((c = getopt(argc, argv, "abc:")) != -1)
    {
        switch(c)
        {
            case 'a':
                aflag = 1;
                break;
            case 'b':
                bflag = 1;
                break;
            case 'c':
                cvalue = optarg;
                break;
            //case '?':
            //    if(optopt == 'c')
            //        fprintf(stderr, "Option -%c requires an argument.\n", optopt);
            //    else if(isprint(optopt))
            //        fprintf()
            default:
            abort();
        }
    }

    printf("aflag = %d, bflag = %d, cvalue = %s\n", aflag, bflag, cvalue);

    for(index = optind; index < argc; index++)
    {
        printf("Non-option argument %s\n", argv[index]);
    }

    return 0;
}