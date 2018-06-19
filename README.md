# Python Boost module C++

### Short
You want to write a module in C++ for use in Python and as easy as possible ?


### Prerequisites
>``` 
>sudo apt-get install libboost-all-dev
>sudo apt-get install python-dev python3-dev
>```

### Prerequisites 2
>Check ___Makefile___ and make sure the _PYTHON_VERSION_ is the same as the one you'll be using, while you're there check the dirs as well.
>
>Also make sure your _TARGET_ (in Makefile) and _BOOST_PYTHON_MODULE_ name (in .cpp) are the same.

### Installation
>```make``` builds .so file in build directory
>
>```sudo make install``` copies .so file to python libs directory
>
>```sudo make uninstall``` deletes .so file from python libs directory

### Python usage
Once installed open python

>```
>from custom_module import ADD
>import custom_module
>a = ADD(2, 5)
>print( a.result() )
>a.x = 10
>print( a.result() )
>a.y = 12
>print( a.y )
>print( a.result() )
>```

### LINKS
[This one]( https://www.boost.org/doc/libs/1_63_0/libs/python/doc/html/tutorial/tutorial/exposing.html )

[That one]( https://docs.python.org/3/tutorial/modules.html )
