
TARGET_SOURCES(SWEVAL_MONITORS_LIB PRIVATE
  	src/InstructionTrace_RV64IMF_Zicsr_InstructionMonitors.cpp
	src/InstructionTrace_RV64IMF_Zicsr_Monitor.cpp

)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_MONITORS_LIB PRIVATE
include
)
