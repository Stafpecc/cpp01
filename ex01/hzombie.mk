override SRC_DIR := srcs

override NAME := hzombie

override ZOMBIE_SRC := \
	main \
	ZombieHorde \
	Zombie \

override SRCS := $(addprefix $(SRC_DIR)/, $(addsuffix .cpp, $(ZOMBIE_SRC)))
