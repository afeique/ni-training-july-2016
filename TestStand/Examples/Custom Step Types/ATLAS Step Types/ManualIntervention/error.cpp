#include "cem.h"
#include <stdio.h>

static char ebuf[256];

int TypeErr (const char *pModName)
{
    sprintf (ebuf, "Type Error For Modifier: %s\n", pModName);
    ErrMsg (7, ebuf);
    return 0;
}

int BusErr (const char *pDevName)
{
    sprintf (ebuf, "Bus Error For Device: %s\n", pDevName);
    ErrMsg (7, ebuf);
    return 0;
}

