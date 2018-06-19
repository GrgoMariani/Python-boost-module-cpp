# Python Boost module C++

### ___Short___
You want to write a module in C++ for use in Python and as easy as possible ?


### ___Prerequisites___
>``` 
>sudo apt-get install libboost-all-dev
>sudo apt-get install python-dev python3-dev
>```

### ___Prerequisites2___
>Check ___Makefile___ and make sure the _PYTHON_VERSION_ is the same as the one you'll be using, while you're there check the dirs as well.
>
>Also make sure your _TARGET_ (in Makefile) and _BOOST_PYTHON_MODULE_ name (in .cpp) are the same.

### ___Installation___
>```make``` builds .so file in build directory
>
>```sudo make install``` copies .so file to python libs directory
>
>```sudo make uninstall``` deletes .so file from python libs directory

### ___Python usage___
Once installed open python

##### Example 1
>```
>from custom_module import ADD
>a = ADD(2, 5)
>print( a.result() )
>a.x = 10
>print( a.result() )
>a.y = 12
>print( a.y )
>print( a.result() )
>```

##### Example 2
>```
>from custom_module import TLAA
>a = TLAA([12, 8, 17, 22])
>print( a.getAt(0))
>print( a.getAt(3))
>print( a.size() )
>print( a.sumAll() )
>```

### ___Links___
[Python Boost]( https://www.boost.org/doc/libs/1_63_0/libs/python/doc/html/tutorial/tutorial/exposing.html )

[Python Modules]( https://docs.python.org/3/tutorial/modules.html )

[Python Extending]( https://docs.python.org/2/extending/extending.html )

