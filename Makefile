CC = g++

SRCDIR = src
OBJDIR = obj
BINDIR = .

OBJS = nodetest.o

OBJS_W_DIR = $(OBJS:%=$(OBJDIR)/%)

all: nodetest

$(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@
	
nodetest: $(OBJS_W_DIR) $(OBJDIR)/main.o 
	$(CC) $(LDFLAGS) -o $@ $(EXTRA_OBJS) $^
	
