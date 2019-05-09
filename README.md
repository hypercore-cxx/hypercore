# SYNOPSIS
Hypercore is a secure, distributed append-only log.

# OBJECTIVES
- `datcxx` should ultimately output Static and Dynamic shared Libraries (so the
internal structure of this project won't matter to the end consumer).

- You should be able to do something like `[brew|apt] install libdat` and then
`#include <libdat>` and use it like it was any other C++ library.

- It will have a public interface that is at parity with other implementations
(the JavaScript implementation being today's canonical implementation).

# FAQ

```
Q: Will I need to use `build` if I want to use `datcxx`?
A: No.
```

```
Q: I tried brew or apt install but I cant install this.
A: It's not ready yet.
```

# BUILD
To generate a `shared library`, install the [`build`][0] tool and run the
following command...

Run install and then build.

```bash
build i
build test
build run shared
```

If you want to produce a static library run

```
build run static
```

# SEE ALSO
How [dat][1] works.

[0]:https://github.com/datcxx/build
[1]:https://datprotocol.github.io/how-dat-works/
