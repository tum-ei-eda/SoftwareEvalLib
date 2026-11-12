
TARGET_SOURCES(SWEVAL_MONITORS_LIB PRIVATE
  	src/VexRiscv_PredNone_BypassTrue_InstructionMonitors.cpp
	src/VexRiscv_PredNone_BypassTrue_Monitor.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_MONITORS_LIB PRIVATE
include
)
