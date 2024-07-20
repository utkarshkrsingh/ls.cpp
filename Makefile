CXX = g++
CXXFLAGS = -std=c++17 -Wall

SRCDIR = src
OBJDIR = obj
INCLUDEDIR = include

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SOURCES))
APPNAME = MyApp

$(APPNAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) -I$(INCLUDEDIR) -c $^ -o $@

.PHONY: clean

clean:
	rm -rf $(OBJDIR) $(APPNAME)
