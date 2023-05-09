#include <stdio.h>

FILE* logging_file;
#define SLOG_OUT logging_file
#include "slog.h"

int main () {
	logging_file = fopen ("log.txt", "wb");
	int line = 20;

	SLOG_ERROR("testing", "it's an error message");
	SLOG_FAILED_FILE("testing", "that's what it does for FILEs");
	SLOG_INFO("testing", "that's how info log looks like");
	SLOG_FN_CALL("testing", "some times it's useful to log function calls");
	SLOG_SYNTAX_ERROR("testing", line, "in parsing you might want to log syntax errors", "word with error");
	SLOG_WARNING("testing", "C is dangerous, but it's punk");
	return 0;
}
