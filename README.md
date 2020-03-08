# learning-cpp

### Things I learned:
`.dll`'s can cause a lot of issues. Unable to run any program with `string` without `libstdc++-6.dll` in the executable file directory. This is due to having conflicting versions of this `.dll` available in `PATH` from some other source.
| Command | Comment |
|---------|---------|
| g++ file.cpp | compiles the file.cpp to a.exe |
| g++ file.cpp -o name | compiles the file.cpp to name.exe|
