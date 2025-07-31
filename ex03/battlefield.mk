override SRC_DIR := srcs

override NAME := battlefield

override BATTLEFIELD_SRC := \
	main \
	HumanA \
	HumanB \
	Weapon \

override SRCS := $(addprefix $(SRC_DIR)/, $(addsuffix .cpp, $(BATTLEFIELD_SRC)))
