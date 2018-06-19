#include <boost/python.hpp>

namespace py = boost::python;

class Add{
private: 
    int _x;
    int _y;
public:
    Add(int x, int y):_x(x), _y(y){
    }
    int result(){
        return this->_x + this->_y;
    }
    void set_x(int x){
        this->_x=x;
    }
    int get_x(){
        return this->_x;
    }
    void set_y(int y){
        this->_y=y;
    }
    int get_y(){
        return this->_y;
    }
};


class TakeListAsArgument{
private:
    py::list _li;
    int _size;
public:
    TakeListAsArgument(py::list li){
        this->_li = li;
        this->_size = len(li);
    }
    int size(){
        return this->_size;
    }
    int getAt(int i){
        return py::extract<int>(this->_li[i]);
    }
    int sumAll(){
        int result=0;
        for(int i=0; i<len(this->_li); i++){
            result += py::extract<int>(this->_li[i]);
        }
        return result;
    }
};



BOOST_PYTHON_MODULE(custom_module)
{
    py::class_< Add >("ADD", py::init<int, int>())
      .def("result", &Add::result)
      .add_property("x", &Add::get_x, &Add::set_x)
      .add_property("y", &Add::get_y, &Add::set_y);
    
    py::class_< TakeListAsArgument >("TLAA", py::init<py::list>())
      .def("size", &TakeListAsArgument::size)
      .def("getAt", &TakeListAsArgument::getAt)
      .def("sumAll", &TakeListAsArgument::sumAll);
    
}

