// Minimal smoke test: confirms that the ATL/MFC headers (atlbase.h, atlcomcli.h)
// can be located and compiled using the active MSVC toolset/SDK environment.
#include <atlbase.h>
#include <atlcomcli.h>

#include <cstdio>

int main() {
    CComPtr<IUnknown> ptr;
    std::printf("ATL/COM headers included and compiled successfully.\n");
    return 0;
}
