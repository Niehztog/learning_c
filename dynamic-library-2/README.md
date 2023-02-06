

```
====================[ Build | prog_a | Debug ]==================================
C:\Users\user1\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8617.54\bin\cmake\win\x64\bin\cmake.exe --build C:\Users\user1\projects\learning-c\cmake-build-debug --target prog_a -j 9
[1/2] Linking C shared library dynamic-library-2\lib_b.dll
FAILED: dynamic-library-2/lib_b.dll dynamic-library-2/liblib_b.dll.a
cmd.exe /C "cd . && C:\Users\user1\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8617.54\bin\mingw\bin\gcc.exe -fPIC -g  -Wl,--export-all-symbols -shared -o dynamic-library-2\lib_b.dll -Wl,--out-implib,dynamic-library-2\liblib_b.dll.a -Wl,--major-image-version,0,--minor-image-version,0 dynamic-library-2/CMakeFiles/lib_b.dir/lib_b.c.obj  -lkernel32 -luser32 -lgdi32 -lwinspool -lshell32 -lole32 -loleaut32 -luuid -lcomdlg32 -ladvapi32 && cd ."
C:\Users\user1\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\223.8617.54\bin\mingw\bin/ld.exe: dynamic-library-2/CMakeFiles/lib_b.dir/lib_b.c.obj:lib_b.c:(.rdata$.refptr.newgameimport[.refptr.newgameimport]+0x0): undefined reference to `newgameimport'
collect2.exe: error: ld returned 1 exit status
ninja: build stopped: subcommand failed.
```