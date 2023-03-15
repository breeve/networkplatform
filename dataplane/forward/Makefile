.PHONY:all

include ../../mk/profile.mk

EAL_INCLUDE=$(NETWORK_PLATFORM_ROOT_PATH)/dataplane/dpdk/lib/include
EAL_LIB=$(NETWORK_PLATFORM_ROOT_PATH)/dataplane/dpdk/lib/lib64

src-c=main.c

all:
	mkdir -p ./bin
	$(CC) -I$(EAL_INCLUDE) -L$(EAL_LIB) -lrte_eal -o ./bin/main $(src-c)
