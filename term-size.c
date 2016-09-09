#include <stdio.h>
#include <windows.h>

int wmain() {
	CONSOLE_SCREEN_BUFFER_INFO info;

	HANDLE tmpConsole = CreateConsoleScreenBuffer(GENERIC_READ, 0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);

	// can't use `GetStdHandle(STD_OUTPUT_HANDLE)` as it doesn't work when output is redirected
	GetConsoleScreenBufferInfo(tmpConsole, &info);

	CloseHandle(tmpConsole);

	int columns = info.dwMaximumWindowSize.X;
	int rows = info.dwMaximumWindowSize.Y;

	printf("%d\n%d\n", columns, rows);

	return 0;
}
