BIN=div
CFGALGS=-DxEDBUG

SRCS:=$0.cpp
COBJS:=$(SRCR:.cpp=.o)

all:$(BIN)

$(COBJS): %.o:%.cpp
	g++ -c $< -o $@ $(CFGALGS)

$(BIN):$(COBJS)
	g++ -o $(BIN) $(COBJS)

clean:
	rm $(BIN) $(COBJS)