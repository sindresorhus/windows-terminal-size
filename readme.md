# windows-terminal-size

> Get the terminal window size on Windows

Works even when run [non-interactively](https://www.tldp.org/LDP/abs/html/intandnonint.html), for example, in a child process or when piped.

## Install

[Download](https://github.com/sindresorhus/windows-terminal-size/releases/latest) the binary and put it somewhere in your [`%path%`](https://stackoverflow.com/a/28778358/64949).

## Usage

```
$ terminal-size
143
24
```

Where `143` are the number of columns and `24` are the number of rows.

## Build

Install [`MinGW-w64`](https://sourceforge.net/projects/mingw-w64/) and run:

```sh
build
```

## Related

- [terminal-size](https://github.com/sindresorhus/terminal-size) - Get the terminal window size, cross-platform
- [macos-terminal-size](https://github.com/sindresorhus/macos-terminal-size) - Get the terminal window size on macOS
