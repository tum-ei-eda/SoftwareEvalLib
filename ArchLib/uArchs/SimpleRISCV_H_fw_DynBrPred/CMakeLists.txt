TARGET_SOURCES(ARCH_LIB PRIVATE
  src/SimpleRISCV_H_fw_DynBrPred_Model.cpp
  src/SimpleRISCV_H_fw_DynBrPred_InstructionModels.cpp
)

TARGET_INCLUDE_DIRECTORIES(ARCH_LIB PRIVATE
  include
)
