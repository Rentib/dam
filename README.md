# [dam]

dam is a itsy-bitsy dwm-esque bar for [river].

![](dam-demo.png)

To use a status-bar, you can pass in status text via stdin:
```
slstatus -s | dam
```

## Building

To build dam first ensure that you have the following dependencies:

* wayland
* wayland-protocols
* fcft
* pixman
* pkg-config

Afterwards, run:
```
make
make install
```

## Usage

Run `dam`.

[dam]:   https://codeberg.org/sewn/dam
[river]: https://codeberg.org/river
