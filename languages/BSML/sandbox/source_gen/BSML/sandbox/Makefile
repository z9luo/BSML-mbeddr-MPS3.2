CC =gcc
LDFLAGS =
CFLAGS =-std=c99
ODIR =./bin
_OBJ_execSandbox =testSandbox.o
OBJ_execSandbox =$(patsubst %,$(ODIR)/%,$(_OBJ_execSandbox))
all: removeStuffFromLibraries clean execSandbox 
.PHONY: removeStuffFromLibraries all clean
removeStuffFromLibraries: 
	
$(ODIR): 
	mkdir -p $(ODIR) 
$(ODIR)/%.o: %.c $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
$(ODIR)/%.o: %.cpp $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
debug: CFLAGS +=-g
debug: clean execSandbox
execSandbox: $(OBJ_execSandbox)
	$(CC) $(CFLAGS) -o $@ $^   $(LDFLAGS) 
clean: 
	rm -rf $(ODIR) 


