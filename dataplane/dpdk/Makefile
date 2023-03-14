.PHONY:all dpdk ninja

include ../../mk/profile.mk

all: dpdk ninja ninja-install

dpdk:
	cd dpdk;meson setup build --prefix=$(NETWORK_PLATFORM_ROOT_PATH)/dataplane/dpdk/lib

ninja:
	cd dpdk/build;ninja

ninja-install:
	cd dpdk/build;ninja install
