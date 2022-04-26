.PHONY: template pthread clean

all: template pthread

template pthread:
	$(MAKE) -C $@

clean:
	$(MAKE) clean -C template
	$(MAKE) clean -C pthread

#new:
#ifeq ($(NAME),)
#	$(error NAME is not set)
#else
#	cp -r template $(NAME)
#	sed -i "s/NAME=template/NAME=$(NAME)/g" $(NAME)/Makefile
#endif