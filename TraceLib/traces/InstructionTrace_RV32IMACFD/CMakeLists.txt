TARGET_SOURCES(TRACES_LIB PRIVATE
  src/InstructionTrace_RV32IMACFD_Monitor.cpp
  src/InstructionTrace_RV32IMACFD_InstructionMonitors.cpp
  src/InstructionTrace_RV32IMACFD_Printer.cpp
  src/InstructionTrace_RV32IMACFD_InstructionPrinters.cpp
)

TARGET_INCLUDE_DIRECTORIES(TRACES_LIB PRIVATE
  include
)
