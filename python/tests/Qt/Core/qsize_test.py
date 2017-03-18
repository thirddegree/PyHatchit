
import sys
from PyHatchit import *
from PyHatchit.Qt.QtCore import *


app = QApplication(len(sys.argv), sys.argv)
w = QSize(40, 50)
x = QSize(15, 15)

print(w)

w.transpose()

print(w)

w /= 2.0

print(w)
w *= 4.0

print(w)

n = w * 2.0
print(n)

k = x.expandedTo(w)
print(k)
