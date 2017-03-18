
#include <pkh_qapplication.h>
#include <QApplication>

void Register_QApplication(py::module& parent)
{
    py::class_<QApplication>(parent, "QApplication")
        .def("__init__",
            [](QApplication& instance, int argc, std::vector<std::string> argv)
            {
                std::vector<char*> _temp;
                for(auto s : argv)
                    _temp.push_back(const_cast<char*>(s.c_str()));
                new (&instance) QApplication(argc, _temp.data());
            })
        .def("styleSheet", [](QApplication& instance){
            return instance.styleSheet().toStdString();
        })
        .def_static("exec_", &QApplication::exec)
        .def_static("beep", &QApplication::beep);
}