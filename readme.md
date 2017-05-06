# win-term-size

> Get the terminal window size on Windows

Works even when run [non-interactively](http://www.tldp.org/LDP/abs/html/intandnonint.html), for example, in a child process or when piped.


## Install

[Download](https://github.com/sindresorhus/win-term-size/releases/latest) the binary and put it somewhere in your [`%path%`](http://stackoverflow.com/a/28778358/64949).


## Usage

```
$ term-size
143
24
```

Where `143` are the number of columns and `24` are the number of rows.


## Build

Install [`MinGW-w64`](https://sourceforge.net/projects/mingw-w64/) and run:

```
$ build
```


## Related

- [term-size](https://github.com/sindresorhus/term-size) - Get the terminal window size, cross-platform *(Uses this binary)*
- [macos-term-size](https://github.com/sindresorhus/macos-term-size) - Get the terminal window size on macOS


## License

MIT © [Sindre Sorhus](https://sindresorhus.com)
