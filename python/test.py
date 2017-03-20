
import sys
from PyQt5.QtWidgets import QApplication, QWidget

if __name__ == '__main__':

    app = QApplication(sys.argv)
    QApplication.aboutQt()
    w = QWidget()
    w.resize(800, 600)
    w.setWindowTitle("Python Qt Test")
    w.show()

    sys.exit(app.exec_())