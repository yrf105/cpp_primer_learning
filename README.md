# c++ tips

1. [当用于内置类型时，如果使用列表初始化且初始值存在丢失风险，则编译器将报错。](./ch2/ex_2_9.cpp)
2. [声明和定义](./ch2/ex_2_11.cpp)
   - 变量声明规定了变量的类型和名字，
   - 而定义除了这些之外还申请存储空间，也可能为变量赋值。
   - 变量只能被定义一次，却可以声明多次

3. [ex_13_4 有个小问题](./ch13/ex_13_4.cpp)
4. [关于报错](./ch13/StrVec.hpp)
   Ubuntu下
   “/usr/bin/ld: /tmp/ccwMEniN.o: in function `StrVec::push_back(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)':
   StrVec.cpp:(.text+0x3e): undefined reference to `StrVec::alloc[abi:cxx11]'
   /usr/bin/ld: /tmp/ccwMEniN.o: in function `StrVec::alloc_n_copy(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const*)':
   StrVec.cpp:(.text+0x88): undefined reference to `StrVec::alloc[abi:cxx11]'
   /usr/bin/ld: /tmp/ccwMEniN.o: in function `StrVec::free()':
   StrVec.cpp:(.text+0x12a): undefined reference to `StrVec::alloc[abi:cxx11]'
   /usr/bin/ld: StrVec.cpp:(.text+0x15e): undefined reference to `StrVec::alloc[abi:cxx11]'
   /usr/bin/ld: /tmp/ccwMEniN.o: in function `StrVec::reallocate()':
   StrVec.cpp:(.text+0x2dc): undefined reference to `StrVec::alloc[abi:cxx11]'
   /usr/bin/ld: /tmp/ccwMEniN.o:StrVec.cpp:(.text+0x347): more undefined references to `StrVec::alloc[abi:cxx11]' follow
   collect2: error: ld returned 1 exit status” 
   Clion 下
   CMakeFiles\StrVec.dir/objects.a(StrVec.cpp.obj):StrVec.cpp:(.rdata$.refptr._ZN6StrVec5allocB5cxx11E[.refptr._ZN6StrVec5allocB5cxx11E]+0x0): undefined reference to `StrVec::alloc[abi:cxx11]'
   collect2.exe: error: ld returned 1 exit status
   mingw32-make.exe[3]: *** [CMakeFiles\StrVec.dir\build.make:105: StrVec.exe] Error 1
   mingw32-make.exe[2]: *** [CMakeFiles\Makefile2:95: CMakeFiles/StrVec.dir/all] Error 2
   mingw32-make.exe[1]: *** [CMakeFiles\Makefile2:102: CMakeFiles/StrVec.dir/rule] Error 2
   mingw32-make.exe: *** [Makefile:137: StrVec] Error 2
   都是因为静态成员变量没有进行（类外）定义