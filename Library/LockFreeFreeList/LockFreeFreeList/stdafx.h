#pragma 

#include <iostream>
#include <Windows.h>

#include "CrashDump\CrashDump\CCrashDump.h"
#include "LockFreeObjectFreeList/ObjectFreeList/CTLSLockFreeObjectFreeList.h"
#include "CTLSLockFreeFreeList.h"
#include "CLockFreeFreeListManager.h"
#include "PerformanceProfiler/PerformanceProfiler/CTLSPerformanceProfiler.h"

//#define new new(__FILE__, __LINE__) 