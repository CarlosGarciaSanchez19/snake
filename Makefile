# Makefile for /home/carlosg/snake
CC := gcc
INCDIR := include
LIBDIR := build
TARGET := test

CFLAGS := -I$(INCDIR) -Wall -Wextra -O3
LDFLAGS := -L$(LIBDIR) -lmlx42 -lglfw -lm -ldl -pthread

SRCS := $(wildcard *.c src/*.c)
OBJS := $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)

fclean:
	@rm -f $(OBJS) $(TARGET)

re: fclean all

.PHONY: all clean fclean re