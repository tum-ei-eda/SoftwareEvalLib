TARGET_SOURCES(TRACES_LIB PRIVATE
  src/SimpleRISCV_H_fw_DynBrPred_Monitor.cpp
  src/SimpleRISCV_H_fw_DynBrPred_InstructionMonitors.cpp
  src/SimpleRISCV_H_fw_DynBrPred_Printer.cpp
  src/SimpleRISCV_H_fw_DynBrPred_InstructionPrinters.cpp
)

# TODO: Make PRIVATE! Current workaround to allow ARCH_LIB to use _Channel.h
TARGET_INCLUDE_DIRECTORIES(TRACES_LIB PUBLIC
  include
)
