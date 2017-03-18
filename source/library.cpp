
#include <library.h>
#include <pkh_platform.h>
#include <pkh_qapplication.h>
#include <pkh_qsize.h>

PYBIND11_PLUGIN(PyHatchit) {

        py::module owner("PyHatchit", "PyHatchit module");


        py::module _Qt = owner.def_submodule("Qt", "Qt module");
        py::module _QtCore = _Qt.def_submodule("QtCore", "QtCore submodule");

        Register_QApplication(_QtCore);
        Register_QSize(_QtCore);

        //py::class_<QApplication>(sub, "QApplication")
        //.def("__init__",
        //[](QApplication& instance, int argc, std::vector<std::string> argv)
        //{
        //    std::vector<char*> _temp;
        //    for(auto s : argv)
        //        _temp.push_back(const_cast<char*>(s.c_str()));
        //    new (&instance) QApplication(argc, _temp.data());
        //})
        //.def("exec_", [](QApplication& instance){
        //    return instance.exec();
        //})
        //.def_static("aboutQt", &QApplication::aboutQt);
        //
        //py::class_<QWidget>(sub, "QWidget")
        //.def(py::init())
        //.def("show", &QWidget::show);

        return owner.ptr();
}
