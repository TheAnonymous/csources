# Nim C Sources

This repo contains the C sources required to bootstrap the [Nim](https://github.com/Araq/Nim/)
compiler. Building these will **not** result in the latest compiler
being built, these C sources should be used in conjuction with ``koch``.

```bash
$ git clone git://github.com/Araq/Nim.git
$ cd Nim
$ git clone --depth 1 git://github.com/nim-lang/csources
$ cd csources && sh build.sh # or .bat for Windows
$ cd ..
$ bin/nim c koch
$ ./koch boot -d:release
```
