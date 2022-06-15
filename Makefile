# Small makefile i made for you SDFTDUsername!
# I hope you enjoy cross-platform building!
# I'll also make a CMakeLists.txt

# Command overview
# raylib - install raylib on linux devices.
# minecraft - build the executable
# all - build minecraft aswell


## From StackOverflow
rwildcard=$(foreach d,$(wildcard $(1:=/*)),$(call rwildcard,$d,$2) $(filter $(subst *,%,$2),$d))

# We'll use clang for this, ok?
CC:=clang
CXX:=clang++
LD:=clang++

RAYLIB_DIR = vendor/imgui

CPPFLAGS= -Iinclude -I$(RAYLIB_DIR) -g
LDFLAGS=
LIBS=-lraylib -lGL -lm -lpthread -ldl -lrt -lX11

SRCS=$(call rwildcard,src,*.cpp)
OBJS=$(patsubst %.cpp,%.o,$(SRCS))
HEADERS=$(call rwildcard,include,*.h)

.PHONY: all raylib clean

%.o : %.cpp ${HEADERS}
	$(CXX) $(CPPFLAGS) -c $< -o $@

raylib:
	echo "RAYLIB LINUX INSTALL"
	cd raylib && mkdir build && cd build && cmake -DBUILD_SHARED_LIBS=ON .. && make && sudo make install

minecraft: $(OBJS) $(HEADERS)
	$(LD) $(LDFLAGS) -o minecraft $(OBJS) $(LIBS)

clean:
	$(RM) ${OBJS}

all: minecraft