override SRC_DIR := srcs

override NAME := harlFiler

override HARLFILTER_SRC := \
	main \
	harl \

override SRCS := $(addprefix $(SRC_DIR)/, $(addsuffix .cpp, $(HARLFILTER_SRC)))
