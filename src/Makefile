CC = g++
COMPILE = $(CC) -Wall -D_FILE_OFFSET_BITS=64 -D_GNU_SOURCE -g -O3 -DDARWIN
INC_PATH = -I/Users/qing/git/data-structures/include

SOURCES = $(wildcard *.cpp) # 查找目录下所有 *.cpp
OBJECTS=$(patsubst %.cpp,%.o,$(SOURCES)) # 把.cpp后缀，替换成.o后缀

# $(info $(OBJECTS) )
# $(warning "here add the debug info")
# $(error "error: this will stop the compile")
# $(info $(TARGET_DEVICE) )
# @echo "start the compilexxxxxxxxxxxxxxxxxxxxxxx"
# ALL_PRGS = main

# all: $(ALL_PRGS)

$(info $(OBJECTS) )

# main : $(OBJECTS)
# 	$(COMPILE) $^ -o $@ 
.o :
	@echo "start the compilexxxxxxxxxxxxxxxxxxxxxxx"
	$(COMPILE) -c -o $@ $< $(INC_PATH)
clean:
	rm -f *.o