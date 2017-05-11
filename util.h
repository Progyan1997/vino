/*
 * Copyright(C) Chenyang Li
 * Copyright(C) tinyhttpd
 */

#define MIN(X,Y) ((X) < (Y) ? (X) : (Y))

int is_directory(const char*);

int is_executable(const char*);

int is_readable(const char*);

int file_exist(const char*);

char *contains(char *start, char *end, char target);

int file_size(const char *);
