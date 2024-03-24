# zstd - <SUMMARY>

This is a `build2` package reporitory for [`zstd`](https://<UPSTREAM-URL>),
a <SUMMARY-OF-FUNCTIONALITY>.

This file contains setup instructions and other details that are more
appropriate for the development rather than consumption. If you want to use
`zstd` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](<PACKAGE>/PACKAGE-README.md) file.

The development setup for `zstd` uses the standard `bdep`-based workflow.
For example:

```
git clone .../zstd.git
cd zstd

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
