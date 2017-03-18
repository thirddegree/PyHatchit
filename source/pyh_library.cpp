
#include <pyh_library.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

void hello()
{
    std::cout << "Hello, World" << std::endl;
}

PYBIND11_PLUGIN(PyHatchit)
{
    py::module m("PyHatchit", "PyHatchit module.");

    m.def("hello", &hello);

    return m.ptr();
}