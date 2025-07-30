override SRC_DIR := srcs

override NAME := zombie

override ZOMBIE_SRC := \
	main \
	newZombie \
	randomChump \
	Zombie \

override SRCS := $(addprefix $(SRC_DIR)/, $(addsuffix .cpp, $(ZOMBIE_SRC)))
