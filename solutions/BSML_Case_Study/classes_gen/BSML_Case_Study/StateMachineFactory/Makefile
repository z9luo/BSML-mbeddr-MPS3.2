CC =gcc
LDFLAGS =-std=c99 -std=c99 `pkg-config --cflags glib-2.0`
CFLAGS =-std=c99
ODIR =./bin
_OBJ_SMFactory =StateMachineFactoryImpl.o
OBJ_SMFactory =$(patsubst %,$(ODIR)/%,$(_OBJ_SMFactory))
all: removeStuffFromLibraries clean SMFactory 
.PHONY: removeStuffFromLibraries all clean
removeStuffFromLibraries: 
	
$(ODIR): 
	mkdir -p $(ODIR) 
$(ODIR)/%.o: %.c $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
$(ODIR)/%.o: %.cpp $(ODIR)
	$(CC) $(CFLAGS)   -c -o $@ $<  
debug: CFLAGS +=-g
debug: clean SMFactory
SMFactory: $(OBJ_SMFactory)
	$(CC) $(CFLAGS) -o $@ $^  `pkg-config --libs glib-2.0` `pkg-config --libs glib-2.0`  $(LDFLAGS) 
clean: 
	rm -rf $(ODIR) 


