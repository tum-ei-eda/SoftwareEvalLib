
TARGET_SOURCES(SWEVAL_MONITORS_LIB PRIVATE
  	src/VexRiscv_PredDynamic_BypassFalse_InstructionMonitors.cpp
	src/VexRiscv_PredDynamic_BypassFalse_Monitor.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_MONITORS_LIB PRIVATE
include
)
