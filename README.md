# defer
c++17 single-header defer/scope-exit macro implementation

- Useful when you want destructor-like behavior without having to write a whole class
- Can be nested
- 100% "code" coverage


## Example
```cpp
void foo() {
    int linuxFd = open("/dev/null", O_WRONLY);
    defer {
        close(linuxFd);
    };

    // work with linuxFd
}
```

