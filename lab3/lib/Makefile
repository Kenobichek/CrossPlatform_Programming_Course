# standard compile options for the c++ executable
FLAGS = -fPIC

# the python interface through swig
PYTHONI = -I/usr/include/python3.10
PYTHONL = -Xlinker -export-dynamic

# default super-target
all: 
	swig -c++ -python mylib.i 
	g++ $(PYTHONL) $(FLAGS) $(PYTHONI) -shared mylib.cc mylib_wrap.cxx -o _mylib.so