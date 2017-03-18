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

#include <pkh_qsysinfo.h>
#include <QSysInfo>

void Register_QSysInfo(py::module& parent)
{
    py::class_<QSysInfo> _SysInfo(parent, "QSysInfo");

    py::enum_<QSysInfo::Endian>(_SysInfo, "Endian")
            .value("BigEndian", QSysInfo::BigEndian)
            .value("LittleEndian", QSysInfo::LittleEndian)
            .value("ByteOrder", QSysInfo::ByteOrder);

    py::enum_<QSysInfo::WinVersion>(_SysInfo, "WinVersion")
            .value("WV_32s", QSysInfo::WV_32s)
            .value("WV_95", QSysInfo::WV_95)
            .value("WV_98", QSysInfo::WV_Me)
            .value("WV_NT", QSysInfo::WV_NT)
            .value("WV_2000", QSysInfo::WV_2000)
            .value("WV_XP", QSysInfo::WV_XP)
            .value("WV_2003", QSysInfo::WV_2003)
            .value("WV_VISTA", QSysInfo::WV_VISTA)
            .value("WV_WINDOWS7", QSysInfo::WV_WINDOWS7)
            .value("WV_WINDOWS8", QSysInfo::WV_WINDOWS8)
            .value("WV_WINDOWS8_1", QSysInfo::WV_WINDOWS8_1)
            .value("WV_WINDOWS10", QSysInfo::WV_WINDOWS10)
            .value("WV_4_0", QSysInfo::WV_4_0)
            .value("WV_5_0", QSysInfo::WV_5_0)
            .value("WV_5_1", QSysInfo::WV_5_1)
            .value("WV_5_2", QSysInfo::WV_5_2)
            .value("WV_6_0", QSysInfo::WV_6_0)
            .value("WV_6_1", QSysInfo::WV_6_1)
            .value("WV_6_2", QSysInfo::WV_6_2)
            .value("WV_6_3", QSysInfo::WV_6_3)
            .value("WV_10_0", QSysInfo::WV_10_0)
            .value("WV_DOS_based", QSysInfo::WV_DOS_based)
            .value("WV_NT_based", QSysInfo::WV_NT_based)
            .value("WV_None", QSysInfo::WV_None);
}