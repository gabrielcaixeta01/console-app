# Variáveis
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
INCLUDES = -Iinclude
SRCDIR = src
OBJDIR = data/obj
DATADIR = data
TESTDIR = tests

# Arquivos
SOURCES = $(filter-out main.cpp, $(wildcard $(SRCDIR)/*.cpp)) # Exclui main.cpp dos sources
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)
MAIN = main.cpp
TARGET = $(DATADIR)/sistema

# Regras
all: $(TARGET)

$(TARGET): $(OBJECTS) $(MAIN)
	@mkdir -p $(DATADIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $(MAIN) $(OBJECTS) -o $@

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(OBJDIR)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -rf $(DATADIR)

run: all
	./$(TARGET)