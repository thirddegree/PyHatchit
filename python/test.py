
import sys
from PyHatchit import *
from PyHatchit.Qt.QtCore import *


app = QApplication(len(sys.argv), sys.argv)
w = QSize(40, 50)

print(w)

w.transpose()

print(w)

QApplication.beep()

sys.exit(QApplication.exec_())
