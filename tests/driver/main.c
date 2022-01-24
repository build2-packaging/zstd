#include <zstd.h>

int main() {
  ZSTD_CCtx* ctx = ZSTD_createCCtx();
  if (ctx == NULL) {
    return -1;
  }

  return ZSTD_freeCCtx(ctx);
}
