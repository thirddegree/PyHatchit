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

#include <pkh_qglobal.h>
#include <QDebug>

void Register_QGlobal(py::module& parent)
{
    py::enum_<Qt::AspectRatioMode>(parent, "AspectRatioMode")
            .value("IgnoreAspectRatio", Qt::AspectRatioMode::IgnoreAspectRatio)
            .value("KeepAspectRatio", Qt::AspectRatioMode::KeepAspectRatio)
            .value("KeepAspectRatioByExpanding", Qt::AspectRatioMode::KeepAspectRatioByExpanding);
}