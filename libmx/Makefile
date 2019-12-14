NAME = libmx.a

HEADERS = libmx.h

FILES = mx_printchar \
	mx_printstr \
	mx_strlen \
	mx_printint \
	mx_strcmp \
	mx_strnew \
	mx_strdel \
	mx_del_strarr \
	mx_strndup \
	mx_strncpy \
	mx_count_words \
	mx_strsplit \
	mx_file_to_str \
	mx_get_arrstr_index \
	mx_atoi \
	mx_arr_size \
	mx_itoa \
	mx_nbrlen \

INC_H = $(addprefix "inc/", $(HEADERS))

ROOT_C = $(addsuffix ".c", $(FILES))
SRC_C = $(addprefix "src/", $(ROOT_C))

ROOT_O = $(addsuffix ".o", $(FILES))

CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: install clean

install:
	@cp $(SRC_C) .
	@cp $(INC_H) .
	@clang $(CFLAGS) $(ROOT_C) -c $(SRCS)
	@rm -rf $(ROOT_C)
	@rm -rf $(HEADERS)
	@mkdir -p obj
	@cp $(ROOT_O) obj/
	@ar -rc $(NAME) $(ROOT_O)
	@rm -rf $(ROOT_O)

uninstall: clean
	@rm -rf $(NAME)

clean:
	@rm -rf obj

reinstall: all 