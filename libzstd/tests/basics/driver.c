#include <zstd.h>

int main()
{
  ZSTD_CCtx* ctx = ZSTD_createCCtx ();
  if (ctx == NULL)
    return 1;

  if (ZSTD_freeCCtx (ctx) != 0)
    return 1;

  return 0;
}
