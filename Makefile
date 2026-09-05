EXE = iceberg-term
EXE_DEBUG = iceberg-debug

CXX = g++

CXXFLAGS = -std=c++17
CXXFLAGS += -pedantic
CXXFLAGS += -I.

SOURCES = main.cc order-entry.cc

ODIR = obj
OBJS = $(patsubst %,$(ODIR)/%,$(addsuffix .o, $(basename $(SOURCES))))

all: $(EXE)

debug: $(EXE_DEBUG)

$(ODIR):
	mkdir -p $@

$(ODIR)/%.o: %.cc | $(ODIR)
	printf "$(OBJS)"
	$(CXX) $(CXXFLAGS) -c -o  $@ $<

$(EXE): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(EXE_DEBUG): $(OBJS)
	$(CXX) $(CXXFLAGS) -fsanitize=address -o $@ $^

.PHONE: clean
clean:
	rm -f $(EXE) $(EXE_DEBUG) $(OBJS)
