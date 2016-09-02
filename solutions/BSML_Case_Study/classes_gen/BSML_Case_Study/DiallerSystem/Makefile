CC =gcc
LDFLAGS =
CFLAGS =-std=c99 -std=c99 `pkg-config --cflags glib-2.0`
ODIR =./bin
_OBJ_Dialing =DiallerSystemImpl.o
OBJ_Dialing =$(patsubst %,$(ODIR)/%,$(_OBJ_Dialing))
all: removeStuffFromLibraries clean Dialing 
.PHONY: removeStuffFromLibraries all clean
removeStuffFromLibraries: 
	
$(ODIR): 
	mkdir -p $(ODIR) 
$(ODIR)/%.o: %.c $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
$(ODIR)/%.o: %.cpp $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
debug: CFLAGS +=-g
debug: clean Dialing
Dialing: $(OBJ_Dialing)
	$(CC) $(CFLAGS) -o $@ $^  `pkg-config --libs glib-2.0` `pkg-config --libs glib-2.0`  $(LDFLAGS) 
clean: 
	rm -rf $(ODIR) 


