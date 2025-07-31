override SRC_DIR := srcs

override NAME := hzombie

override HZOMBIE_SRC := \
	main \
	ZombieHorde \
	Zombie \

override SRCS := $(addprefix $(SRC_DIR)/, $(addsuffix .cpp, $(HZOMBIE_SRC)))
