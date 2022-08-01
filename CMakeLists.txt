cmake_minimum_required(VERSION 3.23)
project(C)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_BUILD_TYPE Debug)

include_directories(basic_content/extern/extern_c)
include_directories(basic_content/extern/extern_c++)
include_directories(basic_content/inline)
include_directories(codingStyleIdioms/5_pImpl)
include_directories(english/basic_content/extern/extern_c)
include_directories(english/basic_content/extern/extern_c++)
include_directories(english/basic_content/inline)
include_directories(learn_class/modern_C++_30/constexpr)
include_directories(learn_class/modern_C++_30/container1)
include_directories("learn_class/modern_C++_30/SFINAE/sfinae paper")
include_directories(practical_exercises/10_day_practice/day4/拷贝构造函数)
include_directories(tool/output)

add_executable(abstract
        basic_content/abstract/abstract.cpp)

add_executable(func_pointer
        basic_content/func_pointer/func_pointer.cpp)

add_executable(C

#        basic_content/abstract/derived_full.cpp
#        basic_content/abstract/interesting_facts1.cpp
#        basic_content/abstract/interesting_facts2.cpp
#        basic_content/abstract/interesting_facts3.cpp

#        basic_content/abstract/interesting_facts4.cpp
#        basic_content/abstract/interesting_facts5.cpp
#        basic_content/abstract/pure_virtual.cpp
#        basic_content/abstract/test.cpp
#        basic_content/assert/assert.c
#        basic_content/assert/ignore_assert.c
#        basic_content/bit/learn.cpp
#        basic_content/c_poly/c++_examp.cpp
#        basic_content/c_poly/c_examp.c
#        basic_content/const/class_const/c++11_example/apple.cpp
#        basic_content/const/class_const/c++11_example/main.cpp
#        basic_content/const/class_const/first_example/apple.cpp
#        basic_content/const/class_const/first_example/main.cpp
#        basic_content/const/class_const/overload_example/apple.cpp
#        basic_content/const/class_const/overload_example/main.cpp
#        basic_content/const/class_const/static_example/apple.cpp
#        basic_content/const/class_const/static_example/main.cpp
#        basic_content/const/extern_const/const_file1.cpp
#        basic_content/const/extern_const/const_file2.cpp
#        basic_content/const/extern_const/file1.cpp
#        basic_content/const/extern_const/file2.cpp
#        basic_content/const/funciton_const/condition1/condition1.cpp
#        basic_content/const/funciton_const/condition1/condition2.cpp
#        basic_content/const/funciton_const/condition1/condition3.cpp
#        basic_content/const/funciton_const/condition2/condition1.cpp
#        basic_content/const/funciton_const/condition2/condition2.cpp
#        basic_content/const/funciton_const/condition2/condition3.cpp
#        basic_content/const/funciton_const/condition3/condition1.cpp
#        basic_content/const/const_function.cpp
#        basic_content/const/const_num.cpp
#        basic_content/decltype/decltype.cpp
#        basic_content/enum/classic_practice.cpp
#        basic_content/enum/tradition_color.cpp
#        basic_content/explicit/explicit.cpp
#        basic_content/extern/extern_c/add.c
#        basic_content/extern/extern_c/add.cpp
#        basic_content/extern/extern_c/add.h
#        basic_content/extern/extern_c++/add.c
#        basic_content/extern/extern_c++/add.cpp
#        basic_content/extern/extern_c++/add.h
#        basic_content/friend/friend_class.cpp
#        basic_content/friend/friend_func.cpp
#        basic_content/func_pointer/func_pointer.cpp
#        basic_content/inline/inline.cpp
#        basic_content/inline/inline.h
#        basic_content/inline/inline_virtual.cpp
#        basic_content/macro/do_while.cpp
#        basic_content/macro/sig_examp.cpp
#        basic_content/maohao/maohao.cpp
#        basic_content/pointer_refer/copy_construct.cpp
        basic_content/pointer_refer/effec.cpp
#        basic_content/sizeof/blackclass.cpp
#        basic_content/sizeof/genA.cpp
#        basic_content/sizeof/geninhe.cpp
#        basic_content/sizeof/moreinhe.cpp
#        basic_content/sizeof/morevir.cpp
#        basic_content/sizeof/static.cpp
#        basic_content/sizeof/virinhe.cpp
#        basic_content/sizeof/virmoreinhe.cpp
#        basic_content/static/nostatic_class.cpp
#        basic_content/static/static_class.cpp
#        basic_content/static/static_demo.cpp
#        basic_content/static/static_error_variable.cpp
#        basic_content/static/static_funciton.cpp
#        basic_content/static/static_variable.cpp
#        basic_content/struct/ext_struct_func.cpp
#        basic_content/struct/struct_func.c
#        basic_content/struct/struct_func.cpp
#        basic_content/struct/struct_func_func.cpp
#        basic_content/this/person.cpp
#        basic_content/union/union.cpp
#        basic_content/using/derived_base.cpp
#        basic_content/using/using_derived.cpp
#        basic_content/using/using_global.cpp
#        basic_content/using/using_typedef.cpp
#        basic_content/virtual/set1/emp.cpp
#        basic_content/virtual/set2/default_arg.cpp
#        basic_content/virtual/set3/copy_consrtuct.cpp
#        basic_content/virtual/set3/full_virde.cpp
#        basic_content/virtual/set3/inline_virtual.cpp
#        basic_content/virtual/set3/static_error.cpp
#        basic_content/virtual/set3/vir_con.cpp
#        basic_content/virtual/set3/vir_de.cpp
#        basic_content/virtual/set3/virtual_function.cpp
#        basic_content/virtual/set3/virtual_function1.cpp
#        basic_content/virtual/set3/virtual_inline.cpp
#        basic_content/virtual/set4/rtti.cpp
#        basic_content/virtual/set4/warn_rtti.cpp
#        basic_content/volatile/noopt_vola.cpp
#        basic_content/volatile/volatile.cpp
#        basic_content/vptr_vtable/vptr1.cpp
#        c++2.0/c++11/variadic/variadic.cpp
#        c++2.0/c++11/variadic/variadic1.cpp
#        c++2.0/c++11/variadic/variadic2.cpp
#        c++2.0/c++11/variadic/variadic3_4.cpp
#        c++2.0/c++11/variadic/variadic5.cpp
#        c++2.0/c++11/variadic/variadic6.cpp
#        c++2.0/c++11/variadic/variadic7.cpp
#        c++2.0/c++11/alias.cpp
#        c++2.0/c++11/auto.cpp
#        c++2.0/c++11/constexpr.cpp
#        c++2.0/c++11/decltype.cpp
#        c++2.0/c++11/default_delete.cpp
#        c++2.0/c++11/explicit.cpp
#        c++2.0/c++11/final.cpp
#        c++2.0/c++11/hash.cpp
#        c++2.0/c++11/initializer.cpp
#        c++2.0/c++11/lambda.cpp
#        c++2.0/c++11/move.cpp
#        c++2.0/c++11/noexcept.cpp
#        c++2.0/c++11/nullptr.cpp
#        c++2.0/c++11/override.cpp
#        c++2.0/c++11/rvalue.cpp
#        c++2.0/c++11/template_template.cpp
#        c++2.0/c++11/tuple.cpp
#        c++2.0/c++11/type_alias.cpp
#        c++2.0/c++11/uniform_initialization.cpp
#        codingStyleIdioms/1_classInitializers/1.1_类之间嵌套.cpp
#        codingStyleIdioms/1_classInitializers/1.2_无默认构造的继承.cpp
#        codingStyleIdioms/1_classInitializers/1.3_类中const数据成员、引用数据成员.cpp
#        codingStyleIdioms/1_classInitializers/initializer.cpp
#        codingStyleIdioms/2_enumclass/namespace.cpp
#        codingStyleIdioms/3_RAII/c++_example.cpp
#        codingStyleIdioms/3_RAII/c++_example1.cpp
#        codingStyleIdioms/3_RAII/c++_example2.cpp
#        codingStyleIdioms/3_RAII/c_example.cpp
#        codingStyleIdioms/3_RAII/RAII.cpp
#        codingStyleIdioms/3_RAII/RAII_fstram.cpp
#        codingStyleIdioms/4_copy-swap/copy-swapAndADL.cpp
#        codingStyleIdioms/5_pImpl/noPimpl.cpp
#        codingStyleIdioms/5_pImpl/pimpl.cpp
#        codingStyleIdioms/5_pImpl/pimplTime.cpp
#        codingStyleIdioms/5_pImpl/pimplTime.h
#        concurrency/concurrency_v1/chapter1/1_helloworld.cpp
#        concurrency/concurrency_v1/chapter2/2.1_basic.cpp
#        concurrency/concurrency_v1/chapter2/2.2_transfer.cpp
#        concurrency/concurrency_v1/chapter2/2.3_ownership.cpp
#        concurrency/concurrency_v1/chapter2/2.4_runtime.cpp
#        concurrency/concurrency_v1/chapter2/2_5_id.cpp
#        concurrency/Threading_In_CPlusPlus/1.thread/intro.cpp
#        concurrency/Threading_In_CPlusPlus/1.thread/thread.cpp
#        concurrency/Threading_In_CPlusPlus/2.create_type/1.function_pointer.cpp
#        concurrency/Threading_In_CPlusPlus/2.create_type/2.lambda_function.cpp
#        concurrency/Threading_In_CPlusPlus/2.create_type/3.functor.cpp
#        concurrency/Threading_In_CPlusPlus/2.create_type/4.no_static_member_function.cpp
#        concurrency/Threading_In_CPlusPlus/2.create_type/5.static_member_function.cpp
#        concurrency/Threading_In_CPlusPlus/3.join_detach/detach.cpp
#        concurrency/Threading_In_CPlusPlus/3.join_detach/join.cpp
#        concurrency/Threading_In_CPlusPlus/4.mutex/critical_section.cpp
#        design_pattern/producer_consumer/producer_consumer.cpp
#        design_pattern/singleton/barrier_singleton.cpp
#        design_pattern/singleton/cpulpuls11_singleton.cpp
#        design_pattern/singleton/dcl_singleton.cpp
#        design_pattern/singleton/hungrysingleton.cpp
#        design_pattern/singleton/iazysingleton.cpp
#        design_pattern/singleton/lock_singleton.cpp
#        design_pattern/singleton/pthreadoncesingleton.cpp
#        design_pattern/singleton/static_local_singleton.cpp
#        effective_c++/2.cpp
#        english/basic_content/abstract/abstract.cpp
#        english/basic_content/abstract/derived_full.cpp
#        english/basic_content/abstract/interesting_facts1.cpp
#        english/basic_content/abstract/interesting_facts2.cpp
#        english/basic_content/abstract/interesting_facts3.cpp
#        english/basic_content/abstract/interesting_facts4.cpp
#        english/basic_content/abstract/interesting_facts5.cpp
#        english/basic_content/abstract/pure_virtual.cpp
#        english/basic_content/abstract/test.cpp
#        english/basic_content/assert/assert.c
#        english/basic_content/assert/ignore_assert.c
#        english/basic_content/bit/learn.cpp
#        english/basic_content/c_poly/c++_examp.cpp
#        english/basic_content/c_poly/c_examp.c
#        english/basic_content/const/class_const/c++11_example/apple.cpp
#        english/basic_content/const/class_const/c++11_example/main.cpp
#        english/basic_content/const/class_const/first_example/apple.cpp
#        english/basic_content/const/class_const/first_example/main.cpp
#        english/basic_content/const/class_const/overload_example/apple.cpp
#        english/basic_content/const/class_const/overload_example/main.cpp
#        english/basic_content/const/class_const/static_example/apple.cpp
#        english/basic_content/const/class_const/static_example/main.cpp
#        english/basic_content/const/extern_const/const_file1.cpp
#        english/basic_content/const/extern_const/const_file2.cpp
#        english/basic_content/const/extern_const/file1.cpp
#        english/basic_content/const/extern_const/file2.cpp
#        english/basic_content/const/funciton_const/condition1/condition1.cpp
#        english/basic_content/const/funciton_const/condition1/condition2.cpp
#        english/basic_content/const/funciton_const/condition1/condition3.cpp
#        english/basic_content/const/funciton_const/condition2/condition1.cpp
#        english/basic_content/const/funciton_const/condition2/condition2.cpp
#        english/basic_content/const/funciton_const/condition2/condition3.cpp
#        english/basic_content/const/funciton_const/condition3/condition1.cpp
#        english/basic_content/const/const_function.cpp
#        english/basic_content/const/const_num.cpp
#        english/basic_content/decltype/decltype.cpp
#        english/basic_content/enum/classic_practice.cpp
#        english/basic_content/enum/tradition_color.cpp
#        english/basic_content/explicit/explicit.cpp
#        english/basic_content/extern/extern_c/add.c
#        english/basic_content/extern/extern_c/add.cpp
#        english/basic_content/extern/extern_c/add.h
#        english/basic_content/extern/extern_c++/add.c
#        english/basic_content/extern/extern_c++/add.cpp
#        english/basic_content/extern/extern_c++/add.h
#        english/basic_content/friend/friend_class.cpp
#        english/basic_content/friend/friend_func.cpp
#        english/basic_content/func_pointer/func_pointer.cpp
#        english/basic_content/inline/inline.cpp
#        english/basic_content/inline/inline.h
#        english/basic_content/inline/inline_virtual.cpp
#        english/basic_content/macro/do_while.cpp
#        english/basic_content/macro/sig_examp.cpp
#        english/basic_content/maohao/maohao.cpp
#        english/basic_content/pointer_refer/copy_construct.cpp
#        english/basic_content/pointer_refer/effec.cpp
#        english/basic_content/sizeof/blackclass.cpp
#        english/basic_content/sizeof/genA.cpp
#        english/basic_content/sizeof/geninhe.cpp
#        english/basic_content/sizeof/moreinhe.cpp
#        english/basic_content/sizeof/morevir.cpp
#        english/basic_content/sizeof/static.cpp
#        english/basic_content/sizeof/virinhe.cpp
#        english/basic_content/sizeof/virmoreinhe.cpp
#        english/basic_content/static/nostatic_class.cpp
#        english/basic_content/static/static_class.cpp
#        english/basic_content/static/static_demo.cpp
#        english/basic_content/static/static_error_variable.cpp
#        english/basic_content/static/static_funciton.cpp
#        english/basic_content/static/static_variable.cpp
#        english/basic_content/struct/ext_struct_func.cpp
#        english/basic_content/struct/struct_func.c
#        english/basic_content/struct/struct_func.cpp
#        english/basic_content/struct/struct_func_func.cpp
#        english/basic_content/this/person.cpp
#        english/basic_content/union/union.cpp
#        english/basic_content/using/derived_base.cpp
#        english/basic_content/using/using_derived.cpp
#        english/basic_content/using/using_global.cpp
#        english/basic_content/using/using_typedef.cpp
#        english/basic_content/virtual/set1/emp.cpp
#        english/basic_content/virtual/set2/default_arg.cpp
#        english/basic_content/virtual/set3/copy_consrtuct.cpp
#        english/basic_content/virtual/set3/full_virde.cpp
#        english/basic_content/virtual/set3/inline_virtual.cpp
#        english/basic_content/virtual/set3/static_error.cpp
#        english/basic_content/virtual/set3/vir_con.cpp
#        english/basic_content/virtual/set3/vir_de.cpp
#        english/basic_content/virtual/set3/virtual_function.cpp
#        english/basic_content/virtual/set3/virtual_function1.cpp
#        english/basic_content/virtual/set3/virtual_inline.cpp
#        english/basic_content/virtual/set4/rtti.cpp
#        english/basic_content/virtual/set4/warn_rtti.cpp
#        english/basic_content/volatile/noopt_vola.cpp
#        english/basic_content/volatile/volatile.cpp
#        english/basic_content/vptr_vtable/vptr1.cpp
#        learn_class/modern_C++_30/compilercompute/factorial.cpp
#        learn_class/modern_C++_30/compilercompute/fmap.cpp
#        learn_class/modern_C++_30/compilercompute/IF.cpp
#        learn_class/modern_C++_30/compilercompute/WhileLoop.cpp
#        learn_class/modern_C++_30/compilerpoly/template.cpp
#        learn_class/modern_C++_30/constexpr/container.cpp
#        learn_class/modern_C++_30/constexpr/newconstexpr.cpp
#        learn_class/modern_C++_30/constexpr/output_container.h
#        learn_class/modern_C++_30/constexpr/sqrt.cpp
#        learn_class/modern_C++_30/constexpr/test3.cpp
#        learn_class/modern_C++_30/container1/container.cpp
#        learn_class/modern_C++_30/container1/output_container.h
#        learn_class/modern_C++_30/container1/vector_l.cpp
#        learn_class/modern_C++_30/container2/array.cpp
#        learn_class/modern_C++_30/container2/hash.cpp
#        learn_class/modern_C++_30/container2/priority_queue.cpp
#        learn_class/modern_C++_30/container2/relacontainer.cpp
#        learn_class/modern_C++_30/container2/unorder.cpp
#        learn_class/modern_C++_30/exception/exception.cpp
#        learn_class/modern_C++_30/functionLambda/adder.cpp
#        learn_class/modern_C++_30/functionLambda/autoLambda.cpp
#        learn_class/modern_C++_30/functionLambda/function.cpp
#        learn_class/modern_C++_30/literalAssert/assert.cpp
#        learn_class/modern_C++_30/literalAssert/default_delete.cpp
#        learn_class/modern_C++_30/literalAssert/literal.cpp
#        learn_class/modern_C++_30/literalAssert/overridefinal.cpp
#        learn_class/modern_C++_30/memorymodel_atomic/barrier_singleton.cpp
#        learn_class/modern_C++_30/memorymodel_atomic/cpulpuls11_singleton.cpp
#        learn_class/modern_C++_30/memorymodel_atomic/dcl_singleton.cpp
#        learn_class/modern_C++_30/memorymodel_atomic/hungrysingleton.cpp
#        learn_class/modern_C++_30/memorymodel_atomic/iazysingleton.cpp
#        learn_class/modern_C++_30/memorymodel_atomic/lock_singleton.cpp
#        learn_class/modern_C++_30/memorymodel_atomic/pthreadoncesingleton.cpp
#        learn_class/modern_C++_30/memorymodel_atomic/static_local_singleton.cpp
#        learn_class/modern_C++_30/RAII/heap.cpp
#        learn_class/modern_C++_30/RAII/RAII.cpp
#        learn_class/modern_C++_30/RAII/stack.cpp
#        learn_class/modern_C++_30/reference/collapses.cpp
#        learn_class/modern_C++_30/reference/don'treturnReference.cpp
#        learn_class/modern_C++_30/reference/forward.cpp
#        learn_class/modern_C++_30/reference/lifetime.cpp
#        learn_class/modern_C++_30/reference/reference.cpp
#        learn_class/modern_C++_30/returnObj/all.cpp
#        learn_class/modern_C++_30/returnObj/returnObj1.cpp
#        learn_class/modern_C++_30/returnObj/returnObj2.cpp
#        learn_class/modern_C++_30/returnObj/returnObj3.cpp
#        learn_class/modern_C++_30/returnObj/returnObj4.cpp
#        learn_class/modern_C++_30/returnObj/returnObj5.cpp
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/auto.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/blending1.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/blending2.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/combiningAndGenius.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/constexpr.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/decltype.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/fis_valid.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/hana.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/is_valid.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/lambda.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/overload1.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/overload2.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/p1SFINAE.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/p2SFINAE.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/packis_valid.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/serialize.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/sizeof1.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/sizeof2.cpp"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/structData.h"
#        "learn_class/modern_C++_30/SFINAE/sfinae paper/timeGenius.cpp"
#        learn_class/modern_C++_30/SFINAE/SFINAE.cpp
#        learn_class/modern_C++_30/smart_ptr/auto_scope.cpp
#        learn_class/modern_C++_30/smart_ptr/shared_ptr.cpp
#        learn_class/modern_C++_30/smart_ptr/unique_ptr.cpp
#        learn_class/modern_C++_30/smart_ptr/unique_ptr_U.cpp
#        practical_exercises/10_day_practice/day1/打印练习.cpp
#        practical_exercises/10_day_practice/day1/是否闰年.cpp
#        practical_exercises/10_day_practice/day1/注释.cpp
#        practical_exercises/10_day_practice/day1/联合体学习.cpp
#        "practical_exercises/10_day_practice/day10/文件例题/三种输入格式/get()12-2.cpp"
#        "practical_exercises/10_day_practice/day10/文件例题/三种输入格式/get(a,size)12-2-1.cpp"
#        "practical_exercises/10_day_practice/day10/文件例题/三种输入格式/getline()12-2-2.cpp"
#        practical_exercises/10_day_practice/day10/文件例题/12-1.cpp
#        practical_exercises/10_day_practice/day10/文件例题/12-2应用.cpp
#        practical_exercises/10_day_practice/day10/文件例题/12-3.cpp
#        practical_exercises/10_day_practice/day10/文件例题/12-5.cpp
#        practical_exercises/10_day_practice/day10/文件例题/12-6.cpp
#        practical_exercises/10_day_practice/day10/文件例题/12-7.cpp
#        practical_exercises/10_day_practice/day10/文件例题/12-9.cpp
#        practical_exercises/10_day_practice/day10/文件例题/输出格式10-4.cpp
#        practical_exercises/10_day_practice/day10/文件例题/重要!!!课堂练习.cpp
#        practical_exercises/10_day_practice/day2/x的n次方.cpp
#        practical_exercises/10_day_practice/day2/掷骰子.cpp
#        practical_exercises/10_day_practice/day2/枚举类型.cpp
#        practical_exercises/10_day_practice/day2/求π.cpp
#        practical_exercises/10_day_practice/day2/汉诺塔.cpp
#        practical_exercises/10_day_practice/day2/结构体.cpp
#        practical_exercises/10_day_practice/day2/递归1.cpp
#        practical_exercises/10_day_practice/day2/递归2.cpp
#        practical_exercises/10_day_practice/day2/静态变量.cpp
#        practical_exercises/10_day_practice/day3/两数交换.cpp
#        practical_exercises/10_day_practice/day3/内联函数.cpp
#        practical_exercises/10_day_practice/day3/函数综合练习题.cpp
#        practical_exercises/10_day_practice/day3/类前向声明.cpp
#        practical_exercises/10_day_practice/day3/静态成员函数1.cpp
#        practical_exercises/10_day_practice/day3/静态成员函数2.cpp
#        practical_exercises/10_day_practice/day3/静态数据成员.cpp
#        practical_exercises/10_day_practice/day4/const用法/常对象与常引用.cpp
#        practical_exercises/10_day_practice/day4/const用法/常对象与普通函数.cpp
#        practical_exercises/10_day_practice/day4/友元函数/友元模块.cpp
#        practical_exercises/10_day_practice/day4/友元函数/友元类.cpp
#        practical_exercises/10_day_practice/day4/拷贝构造函数/clock.cpp
#        practical_exercises/10_day_practice/day4/拷贝构造函数/clock.h
#        "practical_exercises/10_day_practice/day4/时钟练习题/重载()的时钟.cpp"
#        practical_exercises/10_day_practice/day4/时钟练习题/重载++的时钟.cpp
#        "practical_exercises/10_day_practice/day5/基类与派生类关系/基类与派生类(重要).cpp"
#        practical_exercises/10_day_practice/day5/构造函数与析构函数/构造函数调用次序.cpp
#        practical_exercises/10_day_practice/day5/构造函数与析构函数/构造顺序.cpp
#        practical_exercises/10_day_practice/day5/构造函数与析构函数/没有构造函数的派生类.cpp
#        practical_exercises/10_day_practice/day5/构造函数与析构函数/派生类构造函数.cpp
#        practical_exercises/10_day_practice/day5/构造函数与析构函数/派生类构造函数调用顺序.cpp
#        practical_exercises/10_day_practice/day5/构造函数与析构函数/派生类给基类传递参数.cpp
#        practical_exercises/10_day_practice/day5/继承访问权限/保护成员.cpp
#        practical_exercises/10_day_practice/day5/继承访问权限/保护继承.cpp
#        practical_exercises/10_day_practice/day5/继承访问权限/公有继承.cpp
#        practical_exercises/10_day_practice/day5/继承访问权限/私有继承.cpp
#        practical_exercises/10_day_practice/day5/虚拟继承/例1.cpp
#        practical_exercises/10_day_practice/day5/虚拟继承/例2.cpp
#        practical_exercises/10_day_practice/day5/虚拟继承/派生类初始化.cpp
#        "practical_exercises/10_day_practice/day5/虚拟继承/虚基类调用次序(重要).cpp"
#        practical_exercises/10_day_practice/day5/调用规则/直接基类与间接基类.cpp
#        practical_exercises/10_day_practice/day6/纯虚函数和抽象类/抽象类.cpp
#        practical_exercises/10_day_practice/day6/虚函数/从基类继承的成员将访问到派生类版本.cpp
#        practical_exercises/10_day_practice/day6/虚函数/编程实例.cpp
#        practical_exercises/10_day_practice/day6/虚函数/虚函数例子.cpp
#        practical_exercises/10_day_practice/day6/虚函数/虚函数特性.cpp
#        practical_exercises/10_day_practice/day6/虚函数/虚析构函数.cpp
#        "practical_exercises/10_day_practice/day7/()运算符/重载()的时钟.cpp"
#        practical_exercises/10_day_practice/day7/=号运算符/=例题.cpp
#        "practical_exercises/10_day_practice/day7/[]与()例题/example1.cpp"
#        "practical_exercises/10_day_practice/day7/[]运算符/[]例题(重点).cpp"
#        practical_exercises/10_day_practice/day7/一元运算符/秒钟自增运算.cpp
#        practical_exercises/10_day_practice/day7/一元运算符/计数器前后自增.cpp
#        practical_exercises/10_day_practice/day7/二元运算符/1.类运算符重载.cpp
#        practical_exercises/10_day_practice/day7/二元运算符/2.友元运算符实现.cpp
#        practical_exercises/10_day_practice/day7/综合例题/重要.cpp
#        practical_exercises/10_day_practice/day8/STL/map_se.cpp
#        practical_exercises/10_day_practice/day8/函数模板/例1.cpp
#        practical_exercises/10_day_practice/day8/函数模板/模板特化.cpp
#        practical_exercises/10_day_practice/day8/函数模板/求最大值.cpp
#        practical_exercises/10_day_practice/day8/函数模板/重要.cpp
#        practical_exercises/10_day_practice/day8/类模板/模拟栈.cpp
#        practical_exercises/10_day_practice/day8/类模板/类模板特化.cpp
#        practical_exercises/10_day_practice/day9/异常例子/1.cpp
#        practical_exercises/10_day_practice/day9/异常例子/10.cpp
#        practical_exercises/10_day_practice/day9/异常例子/2.cpp
#        practical_exercises/10_day_practice/day9/异常例子/3.cpp
#        practical_exercises/10_day_practice/day9/异常例子/4.cpp
#        practical_exercises/10_day_practice/day9/异常例子/5.cpp
#        practical_exercises/10_day_practice/day9/异常例子/6.cpp
#        practical_exercises/10_day_practice/day9/异常例子/7-1.cpp
#        practical_exercises/10_day_practice/day9/异常例子/7.cpp
#        practical_exercises/10_day_practice/day9/异常例子/8.cpp
#        practical_exercises/10_day_practice/day9/异常例子/9-2.cpp
#        practical_exercises/10_day_practice/day9/异常例子/9.cpp
#        practical_exercises/key_exercises/中括号重载.cpp
#        practical_exercises/key_exercises/函数模板.cpp
#        practical_exercises/key_exercises/动态数组.cpp
#        practical_exercises/key_exercises/字典插入与查找.cpp
#        practical_exercises/key_exercises/异常捕获.cpp
#        practical_exercises/key_exercises/时钟++运算符重载.cpp
#        practical_exercises/key_exercises/类模板之栈.cpp
#        practical_exercises/key_exercises/类模板特化之数组.cpp
#        practical_exercises/key_exercises/继承与封装.cpp
#        practical_exercises/key_exercises/读写文件综合题.cpp
#        practical_exercises/key_exercises/输入输出运算符重载.cpp
#        practical_exercises/key_exercises/输入输出重载.cpp
#        practical_exercises/key_exercises/输出格式.cpp
#        practical_exercises/key_exercises/运算符重载之强制转换.cpp
#        practical_exercises/key_exercises/重载圆括号的时钟.cpp
#        tool/output/container.cpp
#        tool/output/output_container.h)
        )