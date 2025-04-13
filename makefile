CXX = g++
CXXFLAGS = -std=c++11 -Ih_files
OBJDIR = obj
BINDIR = bin
SRCDIR = cpp_files

SOURCES = main.cpp \
          $(SRCDIR)/vehicle.cpp \
          $(SRCDIR)/train.cpp \
          $(SRCDIR)/plane.cpp \
          $(SRCDIR)/ship.cpp \
          $(SRCDIR)/bus.cpp \
          $(SRCDIR)/car.cpp

OBJECTS = $(patsubst %.cpp, $(OBJDIR)/%.o, $(notdir $(SOURCES)))
TARGET = $(BINDIR)/main

$(TARGET): $(OBJECTS)
	@mkdir -p $(BINDIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJDIR)/%.o: %.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(BINDIR)