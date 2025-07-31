override SRC_DIR := srcs

override NAME := replace

override REPLACE_SRC := \
	main \
	replace \

override SRCS := $(addprefix $(SRC_DIR)/, $(addsuffix .cpp, $(REPLACE_SRC)))
