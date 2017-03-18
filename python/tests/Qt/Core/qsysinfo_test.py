
import sys
from PyHatchit import *
from PyHatchit.Qt.QtCore import *

app = QApplication(len(sys.argv), sys.argv)

s = QString("* { font-size: 18px; }")

app.setStyleSheet(QString("* { font-size: 18px; }"))

QApplication.aboutQt()

QApplication.exec_()