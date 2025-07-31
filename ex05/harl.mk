override SRC_DIR := srcs

override NAME := harl

override HARL_SRC := \
	main \
	harl \

override SRCS := $(addprefix $(SRC_DIR)/, $(addsuffix .cpp, $(HARL_SRC)))
