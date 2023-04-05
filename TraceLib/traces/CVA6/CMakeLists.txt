TARGET_SOURCES(TRACES_LIB PRIVATE
  src/CVA6_Monitor.cpp
  src/CVA6_InstructionMonitors.cpp
  src/CVA6_Printer.cpp
  src/CVA6_InstructionPrinters.cpp
)

# TODO: Make PRIVATE! Current workaround to allow ARCH_LIB to use _Channel.h
TARGET_INCLUDE_DIRECTORIES(TRACES_LIB PUBLIC
  include
)
