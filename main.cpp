#include <wdk/wdk.hpp>

extern "C"
ntstatus DriverEntry(PDRIVER_OBJECT driver_object, PUNICODE_STRING) {
    win::dbg_printex("DriverEntry\n");

    driver_object->DriverUnload = [](PDRIVER_OBJECT) static {
        win::dbg_printex("DriverUnload\n");
        return ntstatus::success;
    };
    return ntstatus::success;
}