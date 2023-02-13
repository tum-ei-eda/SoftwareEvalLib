TARGET_SOURCES(TRACES_LIB PRIVATE
  src/InstructionTrace_Monitor.cpp
  src/InstructionTrace_InstructionMonitors.cpp
  src/InstructionTrace_Printer.cpp
  src/InstructionTrace_InstructionPrinters.cpp
)

TARGET_INCLUDE_DIRECTORIES(TRACES_LIB PRIVATE
  include
)
