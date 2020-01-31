CC=gcc
CXX=g++
RM=rm -f
TAR=tar -xzf
MV=mv
CD=cd
BOOSTDIR=/usr/local
BOOST=boost_1_72_0
WGET=wget https://dl.bintray.com/boostorg/release/1.72.0/source/boost_1_72_0.tar.gz
CXXFLAGS  = -Wall -Werror -Wextra -pedantic -ansi

SRCS=main.cc
SRCDIR=src
OBJS=$(subst .cc,.o,$(SRCS))

all: main

deps:
	@echo "Instaling dependencies"
	$(WGET) && \
	$(MV) $(BOOST).tar.gz $(BOOSTDIR) && \
	$(CD) $(BOOSTDIR) && \
	$(TAR) $(BOOST).tar.gz && \
	$(MV) $(BOOST) include && \
	$(RM) $(BOOST).tar.gz

#test:

main: $(SRCDIR)/$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(SRCDIR)/main $(SRCDIR)/$(OBJS)

clean:
	$(RM) $(SRCDIR)/$(OBJS)