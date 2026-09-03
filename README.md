# nghttp3 for bake

[nghttp3](https://github.com/ngtcp2/nghttp3) 1.18.0 (HTTP/3 C library),
packaged for [bake](https://github.com/Ariaszzzhc/bake). Static library, C.

## Use

```bash
bake add https://github.com/bake-pkgs/nghttp3 --tag v1.18.0 nghttp3
```

```toml
[dependencies]
nghttp3 = { url = "https://github.com/bake-pkgs/nghttp3", tag = "v1.18.0" }
```

```c
#include <nghttp3/nghttp3.h>
```

Built from the pinned upstream release archive with no config.h — the
configure answers nghttp3 needs (`HAVE_ARPA_INET_H` family, `WIN32`
byte-order intrinsics) are declared in `[target]` tables. The
cmake-generated `version.h` is rendered into `include/`, and the
`sfparse` submodule (empty in release archives) is vendored under
`sfparse/` at the commit nghttp3 v1.18.0 pins. On windows-gnu,
`NGHTTP3_STATICLIB` is exported to consumers, so consumer targets must not
define it themselves.
License: MIT (upstream).
