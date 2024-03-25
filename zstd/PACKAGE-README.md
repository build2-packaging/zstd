# zstd - Zstandard command line utility

This is a `build2` package for the
[`zstd`](https://https://github.com/facebook/zstd) executable. It provides a
command line interface for Zstandard, a fast lossless compression algorithm,
targeting real-time compression scenarios at `zlib`-level and better
compression ratios.

Note that the `zstd` executable in this package provides `build2` metadata.


## Usage

To start using `zstd` in your project, add the following build-time
`depends` value to your `manifest`, adjusting the version constraint as
appropriate:

```
depends: * zstd ^1.5.5
```

Then import the executable in your `buildfile`:

```
import! [metadata] zstd = zstd%exe{zstd}
```
