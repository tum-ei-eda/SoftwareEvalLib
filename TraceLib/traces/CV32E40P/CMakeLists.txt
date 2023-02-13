TARGET_SOURCES(TRACES_LIB PRIVATE
  src/CV32E40P_Monitor.cpp
  src/CV32E40P_InstructionMonitors.cpp
  src/CV32E40P_Printer.cpp
  src/CV32E40P_InstructionPrinters.cpp
)

# TODO: Make PRIVATE! Current workaround to allow ARCH_LIB to use _Channel.h
TARGET_INCLUDE_DIRECTORIES(TRACES_LIB PUBLIC
  include
)
