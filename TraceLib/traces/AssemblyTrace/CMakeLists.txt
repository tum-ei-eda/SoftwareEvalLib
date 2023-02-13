TARGET_SOURCES(TRACES_LIB PRIVATE
  src/AssemblyTrace_Monitor.cpp
  src/AssemblyTrace_InstructionMonitors.cpp
  src/AssemblyTrace_Printer.cpp
  src/AssemblyTrace_InstructionPrinters.cpp
)

TARGET_INCLUDE_DIRECTORIES(TRACES_LIB PRIVATE
  include
)
