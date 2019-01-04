#include <foo.hh>
#include <Windows.h>

void bar() {
	MessageBoxW(NULL, L"Hello, world!", L"Title", MB_OK);
}

void boo(char const *str) {
	MessageBoxA(NULL, str, "Title", MB_OK | MB_ICONINFORMATION);
}