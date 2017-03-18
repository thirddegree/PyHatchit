
#include <pkh_qsize.h>
#include <sstream>
#include <QSize>

void Register_QSize(py::module& parent)
{
    py::class_<QSize>(parent, "QSize")
            .def(py::init<>())
            .def(py::init<int,int>())
            .def("boundedTo", &QSize::boundedTo)
            .def("expandedTo", &QSize::expandedTo)
            .def("width", &QSize::width)
            .def("height", &QSize::height)
            .def("setWidth", &QSize::setWidth)
            .def("setHeight", &QSize::setHeight)
            .def("isEmpty", &QSize::isEmpty)
            .def("isValid", &QSize::isValid)
            .def("transpose", &QSize::transpose)
            .def("transposed", &QSize::transposed)
            .def("__repr__",
                [](const QSize& s) {
                    std::stringstream ss;
                    ss << "<PyHatchit.Qt.QtCore.QSize [w:" << s.width() << ",h:" << s.height() << "]>";
                    return ss.str();
                });
}