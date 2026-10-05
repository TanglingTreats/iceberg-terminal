EXE = iceberg-term
EXE_DEBUG = iceberg-debug

CXX = g++

CXXFLAGS = -std=c++17
CXXFLAGS += -pedantic
CXXFLAGS += -Iinclude

SRC_DIR = src
SOURCES = $(wildcard $(SRC_DIR)/*.cpp)

ODIR = obj
OBJS = $(patsubst %(SRC_DIR)/%.cpp, $(ODIR)/%.o, $(SOURCES))

all: $(EXE)

debug: $(EXE_DEBUG)

$(ODIR):
	mkdir -p $@

$(ODIR)/%.o: $(SRC_DIR)/%.cpp | $(ODIR)
	printf "$(OBJS)"
	$(CXX) $(CXXFLAGS) -c -o  $@ $<

$(EXE): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(EXE_DEBUG): $(OBJS)
	$(CXX) $(CXXFLAGS) -fsanitize=address -o $@ $^

.PHONE: clean
clean:
	rm -f $(EXE) $(EXE_DEBUG) $(OBJS)
