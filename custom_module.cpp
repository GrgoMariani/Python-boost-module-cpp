#include <boost/python.hpp>


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


namespace py = boost::python;


BOOST_PYTHON_MODULE(custom_module)
{
    py::class_< Add >("ADD", py::init<int, int>())
      .def("result", &Add::result)
      .add_property("x", &Add::get_x, &Add::set_x)
      .add_property("y", &Add::get_y, &Add::set_y);
}

