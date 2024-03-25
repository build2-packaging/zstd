/* Handle --build2-metadata in main() (see also buildfile). */

#define main xmain
#include "programs/zstdcli.c"
#undef main

#include <stdio.h>
#include <string.h>

int main (int argc, const char** argv)
{
  if (argc == 2 && strncmp (argv[1], "--build2-metadata=", 18) == 0)
  {
    printf ("# build2 buildfile zstd\n");
    printf ("export.metadata = 1 zstd\n");
    printf ("zstd.name = [string] zstd\n");
    printf ("zstd.version = [string] %s\n", ZSTD_VERSION_BUILD2);
    printf ("zstd.checksum = [string] %s\n", ZSTD_VERSION_BUILD2);
    printf ("zstd.environment = [strings] ZSTD_CLEVEL\n");
    return 0;
  }

  return xmain (argc, argv);
}
