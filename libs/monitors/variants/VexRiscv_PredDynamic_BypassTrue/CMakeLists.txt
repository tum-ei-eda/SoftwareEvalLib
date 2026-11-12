
TARGET_SOURCES(SWEVAL_MONITORS_LIB PRIVATE
  	src/VexRiscv_PredDynamic_BypassTrue_Monitor.cpp
	src/VexRiscv_PredDynamic_BypassTrue_InstructionMonitors.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_MONITORS_LIB PRIVATE
include
)
