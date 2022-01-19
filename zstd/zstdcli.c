#define main xmain
#include "programs/zstdcli.c"
#undef main

int main(int argc, const char** argv) {
  if (argc == 2 && strncmp(argv[1], "--build2-metadata=", 18) == 0) {
    printf("# build2 buildfile zstd\n");
    printf("export.metadata = 1 zstd\n");
    printf("zstd.name = [string] zstd\n");
    printf("zstd.version = [string] '%s'\n", BUILD2_ZSTD_VERSION);
    printf("zstd.checksum = [string] '%s'\n", BUILD2_ZSTD_VERSION);
    return 0;
  }

  return xmain(argc, argv);
}
