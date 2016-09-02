CC =gcc
LDFLAGS =
CFLAGS =-std=c99 -std=c99 `pkg-config --cflags glib-2.0`
ODIR =./bin
all: removeStuffFromLibraries clean 
.PHONY: removeStuffFromLibraries all clean
removeStuffFromLibraries: 
	
$(ODIR): 
	mkdir -p $(ODIR) 
$(ODIR)/%.o: %.c $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
$(ODIR)/%.o: %.cpp $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
debug: CFLAGS +=-g
debug: clean
clean: 
	rm -rf $(ODIR) 


