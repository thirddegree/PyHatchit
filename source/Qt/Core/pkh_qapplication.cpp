/**
**    Hatchit Engine
**    Copyright(c) 2017 Third-Degree
**
**    GNU Lesser General Public License
**    This file may be used under the terms of the GNU Lesser
**    General Public License version 3 as published by the Free
**    Software Foundation and appearing in the file LICENSE included
**    in the packaging of this file. Please review the following information
**    to ensure the GNU Lesser General Public License requirements
**    will be met: https://www.gnu.org/licenses/lgpl.html
**
**/

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