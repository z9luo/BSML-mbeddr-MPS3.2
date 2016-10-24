CC =gcc
LDFLAGS =
CFLAGS =-std=c99 -std=c99 `pkg-config --cflags glib-2.0`
ODIR =./bin
_OBJ_GTC_exec =GroundTrafficControlImpl.o
OBJ_GTC_exec =$(patsubst %,$(ODIR)/%,$(_OBJ_GTC_exec))
all: removeStuffFromLibraries clean GTC_exec 
.PHONY: removeStuffFromLibraries all clean
removeStuffFromLibraries: 
	
$(ODIR): 
	mkdir -p $(ODIR) 
$(ODIR)/%.o: %.c $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
$(ODIR)/%.o: %.cpp $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
debug: CFLAGS +=-g
debug: clean GTC_exec
GTC_exec: $(OBJ_GTC_exec)
	$(CC) $(CFLAGS) -o $@ $^  `pkg-config --libs glib-2.0` `pkg-config --libs glib-2.0`  $(LDFLAGS) 
clean: 
	rm -rf $(ODIR) 


