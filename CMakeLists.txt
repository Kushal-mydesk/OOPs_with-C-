cmake_minimum_required(VERSION 3.20)
project(C___Program_From_The_Book_)

set(CMAKE_CXX_STANDARD 14)

add_executable(C___Program_From_The_Book_
        Extras/intpart_fracpart.cpp
        Extras/practice1.cpp
        Extras/theGetchLibrary.cpp
        Functions/default_arguements.cpp
        Functions/engdisp.cpp
        Functions/Global_variables.cpp
        Functions/overload.cpp
        Functions/recursion.cpp
        Functions/reference_arguements.cpp
        Functions/vararg.cpp
        "Objects & Classes/cards.cpp"
        "Objects & Classes/counter.cpp"
        "Objects & Classes/ecopycon.cpp"
        "Objects & Classes/englcon.cpp"
        "Objects & Classes/englobj.cpp"
        "Objects & Classes/englret.cpp"
        "Objects & Classes/objpart.cpp"
        "Objects & Classes/smallobj.cpp"
        Structures/cards.cpp
        Structures/checkstrc.cpp
        Structures/englarea.cpp
        Structures/englstrc.cpp
        Structures/parts.cpp)
