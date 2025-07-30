override SRC_DIR := srcs

override NAME := battlefield

override DEMYSTIFY_SRC := \
	main \

override SRCS := $(addprefix $(SRC_DIR)/, $(addsuffix .cpp, $(DEMYSTIFY_SRC)))
