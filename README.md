# zstd - Zstandard lossless compression algorithm

This is a `build2` package repository for [`zstd`](https://https://github.com/facebook/zstd),
a fast lossless compression algorithm, targeting real-time compression
scenarios at `zlib`-level and better compression ratios.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`zstd` in your `build2`-based project, then instead see the accompanying
`PACKAGE-README.md` files:

* [`libzstd/PACKAGE-README.md`](libzstd/PACKAGE-README.md)
* [`zstd/PACKAGE-README.md`](zstd/PACKAGE-README.md)

The development setup for `zstd` uses the standard `bdep`-based workflow.
For example:

```
git clone .../zstd.git
cd zstd

bdep init -C @gcc cc config.c=gcc
bdep update
bdep test
```
