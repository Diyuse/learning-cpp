# learning-cpp

Repository for my c++ learning.

The folder structure is as follows: source code `.cpp` is in `src`, header files `.h` are in `inc`, executable files `.exe` are in `build`.

To help make compiling and building faster, there is a bash script `ezc.sh` for single file projects.
| Command | Action |
|---------|--------|
| ./ezc.sh n | Where n is a positive integer starting from 0 and dictates which file from is compiled and built from an array in the script. |
| ./ezc.sh all | Compiles and builds all the files in the array. |
| ./ezc.sh a | Shorthand for all. |
| ./ezc.sh count | Returns the amount of files in the array. |
| ./ezc.sh c | Shorthand for count. |

### Things I learned:
`.dll`'s can cause a lot of issues. Unable to run any program with `string` without `libstdc++-6.dll` in the executable file directory. This is due to having conflicting versions of this `.dll` available in `PATH` from some other source.
| Command | Comment |
|---------|---------|
| g++ file.cpp | compiles the file.cpp to a.exe |
| g++ file.cpp -o name | compiles the file.cpp to name.exe |
