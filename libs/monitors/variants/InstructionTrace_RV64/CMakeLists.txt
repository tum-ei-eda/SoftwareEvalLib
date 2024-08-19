TARGET_SOURCES(SWEVAL_MONITORS_LIB PRIVATE
  src/InstructionTrace_RV64_InstructionMonitors.cpp
  src/InstructionTrace_RV64_Monitor.cpp
)

TARGET_INCLUDE_DIRECTORIES(SWEVAL_MONITORS_LIB PRIVATE
  include
)

