// mcsdk, v1.0.0 (WIP)

#pragma once
#include <string>

enum class mcsdk_DevicePlatform
{
    mcsdk_DevicePlatform_NotFound = 0,
    mcsdk_DevicePlatform_Windows = 1,
    mcsdk_DevicePlatform_Android = 2,
};

enum class mcsdk_SuccessStatus
{
    mcsdk_SuccessStatus_Error = 0,
    mcsdk_SuccessStatus_Successful = 1,
};

struct mcsdk_GameVersion
{
    int major;
    int minor;
    int build;
    int revision;
};

struct mcsdk_ReturnType
{
    int offset;
    std::string signature;
    mcsdk_SuccessStatus status;
};

namespace mcsdk
{
    void init();
    mcsdk_ReturnType fetch(std::string term);
};