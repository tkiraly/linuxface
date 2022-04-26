ENABLE_WARNINGS=-Wall -Wextra -Werror
INCLUDES=-Iinc
CFLAGS=-std=c11 $(INCLUDES) $(ENABLE_WARNINGS)
LDFLAGS=

NAME=template

SRCDIR=src
OBJDIR=obj
BINDIR=bin
SRCS=$(wildcard $(SRCDIR)/*.c)
OBJS=$(subst src,$(OBJDIR),$(SRCS:.c=.o))

all: $(BINDIR)/$(NAME)

$(BINDIR)/$(NAME): $(OBJS) | $(BINDIR)
	$(CC) $^ -o $@ $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) -c $< -o $@ $(CFLAGS)

$(BINDIR) $(OBJDIR):
	mkdir -p $@

.PHONY: all clean distclean

distclean:
	$(RM) -r $(BINDIR) $(OBJDIR)

clean: distclean
